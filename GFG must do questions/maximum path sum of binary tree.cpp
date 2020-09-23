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
		Node(int d){
			data = d;
			left = right = NULL;
		}
};

Node* buildleveltree()
{
	queue<Node*> q;
	int d;
	cin>>d;
	Node* root = new Node(d);
	q.push(root);
	while(!q.empty())
	{
		Node* curr = q.front();
		q.pop();
		int a,b;
		cin>>a>>b;
		if(a!=-1)
		{
		curr->left = new Node(a);	
		q.push(curr->left);
		}
		if(b!=-1)
		{
		curr->right = new Node(b);	
		q.push(curr->right);
		}		
	}
	return root;	
}

void print(Node* root)
{
	if(root == NULL)
	return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}

class Pair{
	public:
		int branchsum;
		int maxsum;
	Pair()
	{
		branchsum = maxsum = 0;
	}
};

Pair MaxSum(Node* root)
{
	Pair p;
	if(root == NULL)
	return p;
	
	// get the left and right pair
	Pair left = MaxSum(root->left);
	Pair right = MaxSum(root->right);
	// calculate the curr_max_sum
	int opt1 = root->data;
	int opt2 = left.branchsum + root->data;
	int opt3 = right.branchsum + root->data;
	int opt4 = right.branchsum + left.branchsum + root->data;
	
	int curr_max_sum = max(opt1,max(opt2,max(opt3,opt4)));
	
	p.branchsum = max(opt2,max(opt3, root->data));
	p.maxsum = max(left.maxsum,max(right.maxsum,curr_max_sum));
	return p;
	
	
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = buildleveltree();
//print(root);
Pair p = MaxSum(root);
cout<<p.maxsum;
return 0;
}


