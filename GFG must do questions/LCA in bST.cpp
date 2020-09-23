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
		Node* left;
		Node* right;
	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

Node* buildlevelorder()
{
	int d;
	cin>>d;
	queue<Node*> q;
	Node* root = new Node(d);
	q.push(root);
	while(!q.empty())
	{
		Node* curr = q.front();
		q.pop();
		int left,right;
		cin>>left>>right;
		if(left!=-1)
		{
			curr->left = new Node(left);
			q.push(curr->left);
		}
		if(right!=-1)
		{
			curr->right = new Node(right);
			q.push(curr->right);
		}
	}
	return root;
}

Node* LCA(Node *root, int n1, int n2)
{
   if(root == NULL)
   return root;
   
   if(n1 <= root->data and n2 >= root->data)
   return root;
   
   if(n1< root->data and n1< root->data)
   return LCA(root->left, n1,n2);
   else
   return LCA(root->right,n1,n2);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = buildlevelorder();
int n1,n2;
cin>>n1>>n2;
Node* lca = LCA(root,n1,n2);
cout<<lca->data;
return 0;
}


