#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n,h;
cin>>n>>h;
int arr[n];
ll count=0;
f(i,0,n,1)
{
	cin>>arr[i];
	if(arr[i]>h)
	count+=2;
	else
	count+=1;
}
cout<<count;
return 0;
}


