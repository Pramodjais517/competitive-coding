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

int height(Node* root,int &res){
    if(root==NULL)
    return 0;
    
    int lt=height(root->left,res);
    int rt=height(root->right,res);
    
    if(!root->left)
    return rt+1;
    
    if(!root->right)
    return lt+1;
    
    res=min(res, lt+rt);
    
    return min(rt,lt)+1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int res  = INT_MAX;
Node* root = build_tree();
height(root,res);
cout<<res;
return 0;
}


