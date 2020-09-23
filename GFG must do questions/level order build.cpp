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
void printlevelorder(Node* root)
{
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node* curr = q.front();
		q.pop();
		if(curr==NULL)
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
Node* root = buildlevelorder();
printlevelorder(root);
return 0;
}


