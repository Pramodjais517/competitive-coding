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
ll in[10001],low[10001];
vector<ll> node[10001];
bool vis[10001];
ll timer;
void dfs(ll v, ll par)
{
	vis[v] = 1;
	in[v] = timer;
	low[v] = timer;
	timer++;
	for(auto child: node[v])
	{
		if(child == par)
		continue;
		if(vis[child]==1)
		{
			low[v] = min(low[v],in[child]);
		}
		else
		{
			dfs(child,v);
			if(low[child] > in[v])
		    cout<<child<<"-"<<v<<" is a brigde";
		    
		    low[v] = min(low[v],low[child]);
		}		
	}	
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
fi(i,0,m,1)
{
	ll a,b;
	cin>>a>>b;
	node[a].pb(b);
	node[b].pb(a);
}
dfs(1,-1);
return 0;
}


