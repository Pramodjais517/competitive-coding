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
			left = right = NULL;
		}
};

Node* insertBST(Node* root, ll d)
{
	if(root==NULL)
	{
		return new Node(d);
	}
	else if(root->data < d)
	{
		root->right = insertBST(root->right,d);
	}
	else
	{
		root->left = insertBST(root->left ,d);
	}
	return root;
}


Node* inputTree()
{
	ll d;
	cin>>d;
	Node* root = NULL;
	while(d!=-1)
	{
		root = insertBST(root,d);
		cin>>d;
	}
	return root;
}

void print(Node* root)
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
		else{
			cout<<curr->data<<" ";
			if(curr->left!=NULL)
			q.push(curr->left);
			if(curr->right!=NULL)
			q.push(curr->right);
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = inputTree();
print(root);
return 0;
}


