#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	ll n;
  	cin>>n;
  	map<ll,ll> m;
  	ll a;
  	fi(i,0,n,1)
  	{
  		cin>>a;
	  	m[a]=i;
    }
    ll mx = INT_MIN;
    ll mn = INT_MAX;
    fie(i,1,n,1)
    {
    	mx = max(mx,m[i]);
    	mn = min(mn,m[i]);
    	if((mx-mn)==(i-1))
    	cout<<1;
    	else
    	cout<<0;
	}
	cout<<"\n";

  }
return 0;
}


