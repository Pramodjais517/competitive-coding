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
//pair<int,bool> balanced(Node* root)
//{
//	pair<int,bool>p;
//	if(root==NULL)
//	{
//		p.first = 0;
//		p.second = 1;
//		return p;
//	}
//	pair<int,bool> hbl = balanced(root->left);
//	pair<int,bool> hbr = balanced(root->right);
//	p.first = max(hbl.first,hbr.first) + 1;
//	if(abs(hbl.first - hbr.first)<=1 and (hbl.second and hbr.second) )
//	p.second = 1;
//	else
//	p.second = 0;
//	return p;
//}
int height(Node* root)
{
	if(root == NULL)
	return 0;
	return max(height(root->left),height(root->right)) + 1;
}

bool balanced(Node* root)
{
	if(root == NULL)
	return 1;
	int hl = height(root->left);
	int hr = height(root->right);
	if(abs(hr - hl) > 1)
	return 0;
	else
	{
		return(balanced(root->left) and balanced(root->right));
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = build_tree();
bool bal = balanced(root);
if(bal == 0)
cout<<"Not balanced\n";
else
cout<<"Balanced\n";
return 0;
}


