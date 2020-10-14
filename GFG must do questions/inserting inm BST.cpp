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

vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    stack<Node*> s1,s2;
    s1.push(root);
    ans.push_back(root->data);
    bool flag = true;
    while(!s1.empty())
    {
            Node* curr = s1.top();
            s1.pop();
            if(flag)
            {
                if(curr->left != NULL)
                {
                    s2.push(curr->left);
                    ans.push_back(curr->left->data);
                }
                if(curr->right != NULL)
                {
                    s2.push(curr->right);
                    ans.push_back(curr->right->data);
                }
            }
            else
            {
                if(curr->right != NULL)
                {
                    s2.push(curr->right);
                    ans.push_back(curr->right->data);
                }
                if(curr->left != NULL)
                {
                    s2.push(curr->left);
                    ans.push_back(curr->left->data);
                }
            }
            if(s1.empty())
            {
             swap(s1,s2);
             flag = !flag;   
            }
    }
    return ans;
}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Node* root = inputTree();
vector<int> ans = findSpiral(root);
for(auto i:ans)
cout<<i<<" ";
return 0;
}


