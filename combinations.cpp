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
	ll n,r;
	while(1)
	{
    cin>>n>>r;
	if(n==0 and r==0)
	break;
	ll rf = 1;
	for(int i=n;i>(n-r);i--)
	{
		rf*=i;
	}
	ll mf=1;
	for(ll i=1;i<=r;i++)
	mf*=i;
	ll ans=rf/mf;
	cout<<n<<" things taken "<<r<<" at a time is "<<ans<<" exactly.\n";
	}
return 0;
}

