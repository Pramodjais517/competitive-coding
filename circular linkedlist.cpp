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
class Clist{
	public:
		int data;
		Clist* next;
		Clist(int d)
		{
			data = d;
			next = NULL;
		}
};
void insert(Clist* &head,int d)
{
	Clist* node = new Clist(d);
	if(head == NULL)
	{
	head = node;
	head->next = head;
	return;	
	}
	Clist* temp = head;
	while(temp!=NULL and temp->next!= head)
	{
		temp = temp->next;
	}
	temp -> next = node;
	node->next = head;
}
void display(Clist* head)
{
	if(head == NULL)
	return;
	Clist* temp = head;
	do
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	while(temp!=head);
}
int main()
{
Clist* head = NULL;
insert(head,2);	
insert(head,3);
insert(head,4);
display(head);
return 0;
}

