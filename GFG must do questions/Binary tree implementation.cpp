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

Node* build_tree()
{
	int d;
	cin>>d;
	if(d==-1)
	return NULL;
	Node* node = new Node(d);
	node->left = build_tree();
	node->right = build_tree();
	return node;
}
void print(Node* root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = build_tree();
print(root);
return 0;
}


