#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int item)
	{
		data = item;
		next = NULL;
	}
};

Node* insert(Node* head,int data)  // inserting at head
{
	Node* node = new Node(data);
	node->next = head;
	head = node;
	return head;
}
//void display(Node* head)
//{
//	while(head)
//	{
//	cout<<head->data<<" ";
//	head = head->next;
//	}
//}
int main()
{
int n;
cin>>n;
int zero_count = 0,one_count =0 ,two_count = 0,val;
Node* head = NULL;
for(int i=0;i<n;i++)
{
	cin>>val;
	if(val == 0)
		zero_count++;
	if(val == 1)
		one_count++;
	else
		two_count++;
	head = insert(head,val);
}
Node* temp = head;
while(temp)
{
	cout<<temp->data<<" ";
	temp = temp->next;
}
while(temp)
{
	if(zero_count>0)
	{
		temp->data = 0;
		zero_count--;
	}
	else if(one_count>0)
	{
		temp->data = 1;
		one_count--;
	}
	else
	{
		temp->data = 2;
		two_count--;
	}
	temp = temp->next;
}
//display(head);

return 0;
}


