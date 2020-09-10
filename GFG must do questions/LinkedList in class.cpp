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

class Node
{
	public:
		int item;
		Node* next;	
	Node(int a)
	{
		this->item = a;
		this->next = NULL;
	}
};

//class List
//{
//	private:
//		Node* head;
//	public:
//		List()
//		{
//			this->head = NULL;
//		}
//	void insert(int a)
//	{
//		Node* node = new Node(a);
//		node->next = head;
//		head = node;
//	}
//	void show()
//	{
//		Node* temp = head;
//		if(temp == NULL)
//		{
//			cout<<"List is empty\n";
//		}
//		while(temp != NULL)
//		{
//			cout<<temp->item<<"->";
//			temp = temp->next;
//		}
//		cout<<"NULL";
//	}
//};

void insert(Node** head,int a)
{
	Node* node = new Node(a);
	node->next = *head;
	*head = node;
}
void show(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->item<<"->";
		head=head->next;
	}
	cout<<"NULL\n";
}
int main()
{
	Node* head = NULL;
	insert(&head,5);
	insert(&head,6);
	show(head);
	insert(&head,7);
	insert(&head,9);
	show(head);
return 0;
}


