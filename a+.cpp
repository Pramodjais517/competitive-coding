#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
#include <tr1/unordered_map>
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define pl pair<ll,ll>
#define rep(i,xi,yi,zi) for(ll i=xi;i<yi;i+=zi)
#define repe(i,xi,yi,zi) for(ll i=xi;i<=yi;i+=zi)
#define rrep(i,xi,yi,zi) for(ll i=xi;i>=yi;i-=zi)
#define pq priority_queue<ll>
#define rpq priority_queue<ll, vl, greater<ll> > 
#define umap tr1::unordered_map
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed<<setprecision(10);
using namespace std;
using namespace __gnu_pbds; 
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pset;  
 
int main()
{
	fastIO
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, k;
		cin>>n>>k;
		if(((n%2 == 0) && (k%2 == 0)) || ((n%2 == 1) && (k%2 == 1)))
		{
			ll sum = (1 + (k-1))*k;
			if(sum > n) cout<<"NO\n";
			else cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
