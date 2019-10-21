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
   ll t;
   cin>>t;
   while(t--)
  {
  	ll n;
  	cin>>n;
  	ll dumb[n];
  	ll arr[n];
  	ll max=0,min=0;
  	f(i,0,n,1)
  	{
  	cin>>arr[i];
  	dumb[i]=arr[i];
    }
  	sort(arr,arr+n);
  	max=arr[n-1];
  	min=arr[0];
  	f(i,0,n,1)
  	{
  		if(dumb[i]==max or dumb[i]==min)
  		cout<<dumb[i]<<" ";
	}
  }
return 0;
}


