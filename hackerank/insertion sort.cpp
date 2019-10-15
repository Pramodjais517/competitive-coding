#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
void insertionsort(ll a[],ll n)
{

 f(i,0,n,1)
 { int key = a[i];
 	int j=i-1;
 	while(a[j]>=key and j>=0)
 	{
 		a[j+1]=a[j];
 		j--;
	 }
	a[j+1]=key;
 }
}
int main()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n,1)
cin>>a[i];
insertionsort(a,n);
f(i,0,n,1)
cout<<a[i]<<" ";
return 0;
}


