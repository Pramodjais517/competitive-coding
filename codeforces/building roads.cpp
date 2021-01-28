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

vector<ll> graph[100001];
bool vis[100001];

void dfs(ll v)
{
	vis[v] = 1;
	for(auto child:graph[v])
	{
		if(vis[child] == 0)
		dfs(child);
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
memset(vis,0,sizeof(vis));
ll a,b;
fi(i,0,m,1)
{
	cin>>a>>b;
	graph[a].pb(b);
	graph[b].pb(a);
}
ll cc=0;
vector<ll> path;
fi(i,1,n+1,1)
{
	if(vis[i]==0)
	{
	    path.pb(i);
		dfs(i);	
		cc++;
	}
}
cout<<cc-1<<"\n";
for(ll i=1;i<cc;i++)
{
    cout<<path[i-1]<<" "<<path[i]<<"\n";
}
return 0;
}


