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
bool possible(ll p[],ll n,ll m)
{
	ll s=0,page=0;
	fi(i,0,n,1)
	{
		page+=p[i];
		if(page>n)
		{
			s++;
			page-=p[i];
		}
	}
	if(s>m)
	return 0;
	return 1;
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	ll n, m;cin>>n>>m;
  	ll p[n],sum=0;
  	fi(i,0,n,1)
  	{
  		cin>>p[i];
  		sum+=p[i];
   }
   ll start = p[0];
   ll end = sum;
   ll mid ;
   ll ans = 0;
   while(start<=end)
   {
   	mid= (start+end)/2;
   	if(possible(p,mid,m))
   	{
   		ans = mid;
   		end = mid-1;
   }
   else{
   	start=mid+1;
   }
   }
   cout<<ans<<"\n";
  }
return 0;
}


