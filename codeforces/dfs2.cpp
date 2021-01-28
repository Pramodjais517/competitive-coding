#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007
vector<ll> graph[10001];
bool vis[10001];

void dfs(ll src)
{
    cout<<src<<" ";
    vis[src] = 1;
    for(auto child:graph[src])
    {
        if(vis[child]==0)
        {
           dfs(child);     
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
memset(vis,0,sizeof(vis));
ll n,m;
cin>>n>>m;ll a,b;
while(m--)
{
    cin>>a>>b;
    graph[a].pb(b);
    graph[b].pb(a);
}
dfs(1ll);
return 0;
}





