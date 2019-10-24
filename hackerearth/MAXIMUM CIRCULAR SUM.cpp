#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
ll kadane(ll arr[],ll n)
{
	ll cs=0,ms=0;
	f(i,0,n,1)
	{
		cs+=arr[i];
		if(cs<0)
		cs=0;
		ms=max(cs,ms);
	}
	return ms;
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	ll n;
  	cin>>n;
  	ll arr[n];
  	ll org=0;
  	f(i,0,n,1)
   {
    cin>>arr[i];
    org+=arr[i];
    }
  	ll s1 = kadane(arr,n);
  	f(i,0,n,1)
  	arr[i]=-arr[i];
  	org=org+kadane(arr,n);
  	cout<<max(s1,org);
  	
  }
return 0;
}


