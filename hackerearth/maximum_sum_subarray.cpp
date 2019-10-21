#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
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
  	ll a[n];
  	f(i,0,n,1)
  	cin>>a[i];
  	ll cs=0,ms=0;
  	f(i,0,n,1)
  	{
  		cs+=a[i];
  		if(cs<0)
  		cs=0;
  		ms=max(cs,ms);
	}
	cout<<ms<<"\n";
  }
return 0;
}


