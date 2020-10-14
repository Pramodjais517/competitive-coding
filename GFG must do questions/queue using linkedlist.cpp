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
		Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue{
	Node* head;
	Node* tail;
	int curr_size;
	public:
		Queue(){
			head = tail = NULL;
			curr_size = 0;
		}
		bool empty(){
			return head == NULL;
		}
		void push(int d){
			Node *node = new Node(d);
			if(tail != NULL)
			tail->next = node;
			tail = node;
			if(head == NULL)
			head = node;
		}
		void pop()
		{
			if(!empty())
			{
				Node* temp = head;
				head = head->next;
				delete temp;
			}
		}
		int front()
		{
			return head->data;
		}
		~Queue()
		{
			Node* temp;
			while(head!=NULL)
			{
				temp = head;
				delete temp;
				head = head->next;
			}
			delete temp;
		}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Queue q;
for(int i=0;i<10;i++)
q.push(i);
q.pop();
while(!q.empty())
{
	cout<<q.front()<<" ";
	q.pop();
}
return 0;
}


