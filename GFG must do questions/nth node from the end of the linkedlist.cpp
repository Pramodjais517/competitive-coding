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


int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* fast = head;
       Node* slow = head;
       while(n>0 and fast!=NULL)
       {
           fast = fast->next;
           n--;
       }
       if(n>0)
       return -1;
       while(slow and fast!=NULL)
       {
           slow = slow->next;
           fast = fast->next;
       }
       return slow->data;
}

