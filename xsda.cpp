#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			v.push_back((a[i]*a[j])/__gcd(a[i],a[j]));
		}
	}
	ll out=0;
	for(ll i=0;i<v.size();i++)
	{
		out=__gcd(out,v[i]);
	}
	cout<<out<<"\n";
	return 0;
}
