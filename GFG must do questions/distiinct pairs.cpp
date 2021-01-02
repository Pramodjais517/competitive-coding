#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
	ll n;
	cin>>n;
	set<ll> s;
	ll val;	
	for(ll i=0;i<n;i++)
	{
		cin>>val;
		s.insert(val);
	}
	ll x = s.size();
	ll ans = ((x %mod * (x-1)%mod)%mod + x%mod )%mod;
	cout<<ans;
	
return 0;
}


