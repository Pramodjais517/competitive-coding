#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

ll power(ll a,ll b){
	if(b==0)
	return 1;
	else if(b==1)
	return a;
	else {
		ll r = power(a,b/2);
		r = (r*r)%mod;
		if(!(b&1))
		return r;
		else 
		return (a*r)%mod;
	}
}

int main()
{
	ll n,x;
    cin>>n>>x;
    ll ans = power(n,x);
    cout<<ans<<"\n";	
return 0;
}


