#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct node
{
	int data;
	struct node* left;
	struct node* right;
 } ;
 struct node* newNode(int data)
 {
 	struct node* node = (struct node*)malloc(sizeof(struct node));  
 	node->data = data;
	 node->left= NULL;
	 node->right=NULL;
	 return node;	
 }
 void traverse(struct node* root)
 {
 	if(root==NULL)
 	return;
 	else
 	cout<<root->data;
    traverse(root->left);
    traverse(root->right);
 }
int main()
{
struct node *root = newNode(1);
root ->left = newNode(2);
root->right	= newNode(3);
root->left->left = newNode(4);
traverse(root);	
return 0;
}

