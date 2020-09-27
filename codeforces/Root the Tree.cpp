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

ll vis[10001];
vector<ll> node[10001];
ll in[10001];

void dfs(ll v)
{
	vis[v] = 1;
	for(auto child:node[v])
	{
		if(vis[child] == 0)
		{
			dfs(child);
		}
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
	cin>>n;
	m = n-1;
	fie(i,0,n+1,1)
	vis[i] = 0,in[i]=0;
	ll a,b;
	while(m--)
	{
		cin>>a>>b;
		node[a].pb(b);
		in[b]++;
	}
	sort(in,in+10001,greater<ll>());
	ll ans = 0,i=0;
	while(in[i]>1)
	{
		ans+=(in[i]-1);
		i++;
	}
	cout<<ans<<"\n";
}
return 0;
}


