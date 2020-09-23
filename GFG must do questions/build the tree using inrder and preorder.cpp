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
		int data ;
		Node* left;
		Node* right;
	Node(int d)
	{
		data = d;
		left = right = NULL;
	}
};

int search(int in[], int st,int en, int val)
{
	for(int i = st;i<=en;i++)
	{
		if(in[i] == val)
		return i;
	}
}

Node* build_tree(int in[],int pre[],int st,int en)
{
	static int preIndex  = 0;
	if(st > en)
	return NULL;
	
	Node* node = new Node(pre[preIndex++]);
	if(st == en)
	return node;
	
	int ind = search(in,st, en,node->data);
	node->left = build_tree(in,pre,st,ind - 1);
	node->right = build_tree(in,pre,ind + 1,en);
	return node;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int inorder[n];
int preorder[n];
fi(i,0,n,1)
cin>>inorder[i];
fi(i,0,n,1)
cin>>preorder[i];

Node* root = build_tree(inorder,preorder,0,n-1);

return 0;
}


