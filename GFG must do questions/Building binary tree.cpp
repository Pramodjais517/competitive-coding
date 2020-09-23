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
		Node* left,*right;
		Node(int a)
		{
			data = a;
			left = NULL;
			right = NULL;
		}
};

Node* build_tree(int a[],int l, int r)
{
	if(r<l)
	return NULL;
	int mid = l + (r-l) / 2;
	Node* node = new Node(a[mid]);
	node->left = build_tree(a,l,mid-1);
	node->right = build_tree(a,mid+1,r);
	return node;
}
void print_tree(Node* root)
{
	 queue<Node*> q;
	 q.push(root);
	 q.push(NULL);
	 while(!q.empty())
	 {
	 	Node* curr = q.front();
	 	q.pop();
	 	if(curr == NULL)
	 	{
	 		cout<<"\n";
	 		if(!q.empty())
			 q.push(NULL);	
		}
		else
		{
			cout<<curr->data<<" ";
			if(curr->left != NULL)
			q.push(curr->left);
			if(curr->right != NULL)
			q.push(curr->right);
		}	
	 }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
fi(i,0,n,1)
cin>>a[i];
Node* root = build_tree(a,0,n-1);
print_tree(root);
return 0;
}


