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

bool tracepath(Node* root, vector<Node*> &path,int k)
{
	if(root==NULL)
	return false;
	if(root->data == k)
	{
		path.push_back(root);
		return true;	
	}
	
	if(tracepath(root->left,path, k))
	{
	path.push_back(root);
	return true;
	}
	else
	{
		if(tracepath(root->right,path, k))
		{
		path.push_back(root);
		return true;
		}
	}
	return false;
}


Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   vector<Node*> path1,path2;
   tracepath(root,path1,n1);
   tracepath(root,path2,n2);
   int i = path1.size()-1;
   int j = path2.size()-1;
   Node* LCA_point = root;
   while(i>=0 and j>=0 and path1[i]->data == path2[j]->data)
   {
       LCA_point = path1[i];
       i--,j--;
   }
  return LCA_point;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = build_tree();
int n1,n2;
cin>>n1>>n2;
Node* point = LCA(root,n1,n2);
cout<<point->data;
return 0;
}


