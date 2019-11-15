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
   ll n,x,a,b;
   while(t--)
  {
  	cin>>n>>x>>a>>b;
  	ll y=max(a,b);
  	ll z=min(a,b);
  	while(y<n and x>0)
  	{
  		x--;y++;
	  }	
  	if(x>0)
  	{
  		while(z>1 and x>0)
  		{
  			x--;z--;
		  }
	  }
   cout<<y-z<<"\n";
  }
return 0;
}


