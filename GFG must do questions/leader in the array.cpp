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
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	ll i = n-1;
	ll m = a[n-1];
	vector<ll> ans;
	while(i>=0)
	{
		if(a[i] >= m)
		{
			m = a[i];
			ans.pb(a[i]);
		}
		i--;
	}
	for(auto i = ans.rbegin();i!=ans.rend();i++)
	cout<<*i<<" ";
	cout<<"\n";
}
return 0;
}


