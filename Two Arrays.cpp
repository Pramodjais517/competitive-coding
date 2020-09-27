#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n,T;
	cin>>n>>T;
	vector<pair<ll,ll>> a;
	ll x;
	fi(i,0,n,1)
	{
		cin>>x;
		a.pb({x,i});
	}
	sort(a.begin(),a.end());
	ll ind = -1 ;
	for(ll i=0;i<a.size();i++)
	{
		if((2 * a[i].first) >= T)
		{
			ind  = i;
			break;
		}
	}
	bool arr[n] = {0};
	bool f = 1;
	for(ll i=0;i<n;i++)
	{
		if(i<ind)
		arr[a[i].second] = 1;
		else
		{
		if((2 * a[i].first) == T)
		{
			arr[a[i].second] = f;
			f = !f;
		}
		}
	}
	for(auto i:arr)
	cout<<i<<' ';
	cout<<"\n";
}
return 0;
}


