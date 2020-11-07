#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

class Node{
	
	public:
		int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
//void insertBegin(int data)
//{
//		Node* temp = head;
//		Node* node = new Node(data);
//		node->next = temp;
//		head = node;
//}

void insertEnd(int data,Node* &head)
{
	if(head==NULL)
	{
		Node* node = new Node(data);
		head = node;
		return;
	}
	Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	Node* node = new Node(data);
	temp->next = node;	
}	
void display(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

Node* reverse(Node* head)
{
	Node* prev = NULL, *curr = head,*next = NULL;
	while(curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* head = NULL;
int in;
while(1)
{
	cin>>in;
	if(in == -1)
	break;
	insertEnd(in,head);
}
head = reverse(head);
display(head);
return 0;
}


