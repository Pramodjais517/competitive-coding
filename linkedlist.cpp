#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here
class Node{
	public:
		int data;
	    Node* next;
		Node(int d){
			data = d;
			next = NULL;
		}
};
void insertHead(Node** head,int data)
{
	Node* n = new Node(data);
	n -> next = *head;
	*head = n;
}
void deletionTail(Node* head)
{
	while(head->next->next!=NULL)
	{
		head  = head->next;
	}
	head ->next = NULL;
}
void display(Node* head)
{
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"\n";
}
void insertMiddle(Node* head, int data, int pos)
{
	Node* node = new Node(data);
	int i=0;
	Node* prev = NULL;
	while(i != pos)
	{
		prev = head;
		head = head->next;
		i++;
	}
	if(i<=pos)
	{
	node ->next = head;
	prev->next = node;
	}
}
void deleteEnd(Node* head)
{
	while(head->next->next != NULL)
	{
		head  = head->next;
	}
	delete head->next;
	head->next = NULL;
}
void Search(Node* head,int data)
{
	bool flag=0;
	while(head!=NULL)
	{
		if(head -> data == data)
		{
			flag=1;
			break;
		}
		head = head->next;
	}
	if(flag)
	{
		cout<<"Found\n";
	}
	else
	cout<<"Not Found\n";
}
void reverse(Node** head)
{
	Node* prev = NULL;
	Node* current = *head;
	Node* next;
	while(current!=NULL)
	{
		next = current ->next;
		current -> next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}
Node* midpoint(Node* &head)
{
	Node* slow = head;
	Node* fast = head->next;
	while(fast!= NULL and fast->next!= NULL)
	{
		fast = fast->next->next;
		slow = slow -> next;
	}
	return slow;
}
Node* merge(Node* &head,Node* &head2)
{
	if(head == NULL)
	return head2;
	if(head2 == NULL)
	return head;

	Node* c;
	if(head->data < head2->data)
	{
		c = head;
		c->next = merge(head -> next, head2); 
	}
	else
	{
		c = head2;
		c->next =  merge(head,head2->next);
	}
	return c;
	
}
Node* mergesort(Node* &head)
{
	if(head == NULL or head -> next == NULL)
	return head;
	
	Node* mid = midpoint(head);
	Node* a = head;
	Node* b = mid->next;
	mid ->next = NULL ;
	a = mergesort(a);
	b = mergesort(b);
	Node* c = merge(a,b);
	return c;
	
}
int main()
{
Node* head = NULL;
insertHead(&head,10);
insertHead(&head,1);
insertHead(&head,4);
insertHead(&head,3);
insertHead(&head,8);
display(head);
head = mergesort(head);
display(head);
return 0;
}

