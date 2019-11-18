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
   ll n,xp=0,xn,dp;
   while(t--)
  {
  		cin>>n;
    ll h[n];
  	ll D[n];
  	ll d[n-1];
  	cin>>xp;
  	cin>>h[0];
  	dp = 0;
  	fi(i,0,n-1,1)
  	{
  		cin>>xn;
  		cin>>h[i+1];
  		d[i]=(xn-xp);
  		D[i]=(dp+d[i]);
  		dp = d[i];
  		xp=xn;	
	  }
	  D[n-1] = d[n-2];
	  sort(D,D+n);
	  sort(h,h+n);
	  ll ans=0;
	  fi(i,0,n,1)
	  {
	  	ans+=(h[i]*D[i]);
	  }
	  cout<<ans<<"\n";
  }
return 0;
}


