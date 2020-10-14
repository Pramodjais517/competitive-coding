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

bool isvalid(vector<ll>a[],ll x,ll y,ll c)
{
	if(x<0 or x >= a->size() or y<0 or y>=a[0].size())
	return false;
	if(a[x][y]!=c)
	return false;
	return true;
}

void dfs(vector<ll> a[],ll x,ll y,ll k,ll c)
{
	if(isvalid(a,x,y,c))
	{
	a[x][y] = k;
	dfs(a,x-1,y,k,c);
	dfs(a,x,y+1,k,c);
	dfs(a,x+1,y,k,c);
	dfs(a,x,y-1,k,c);	
	}
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n,m;
	cin>>n>>m;
	vector<ll> a[n];
	ll x;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cin>>x;
			a[i].push_back(x);
		}
	}
	ll y,k;
	cin>>x>>y>>k;
	a[x][y] = k;
	dfs(a,x,y,k,a[x][y]);
	for(auto i:a)
	{
		for(auto j:i)
		{
			cout<<j<<" ";
		}
	}
	cout<<"\n";
}
return 0;
}


