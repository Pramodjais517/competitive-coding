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
	ll n,k;
	cin>>n>>k;
	ll a[n+1];
	fie(i,1,n,1)
	cin>>a[i];
	ll i=1;
	while(i <= n)
	{
		ll l = i;
		ll r = i+k -1 < n?i+k-1:n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++,r--;
		}
		i+=k;
	}
	fie(i,1,n,1)
	{
		cout<<a[i]<<' ';
	}
	cout<<"\n";
}
return 0;
}


