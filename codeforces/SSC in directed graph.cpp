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
vector<ll> tg[10001];

vector<ll> SSC;
vector<ll> order;

void dfs(ll node)
{
    vis[node] = 1;
    for(auto child:graph[node])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
    order.pb(node);
}

void dfs1(ll node)
{
    vis[node] = 1;
    SSC.pb(node);
    for(auto child:tg[node])
    {
        if(!vis[child])
        {
            dfs1(child);
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,m;
cin>>n>>m;
while(m--)
{
    ll a,b;
    cin>>a>>b;
    graph[a].pb(b);
    tg[b].pb(a);
    
}
for(ll i=1;i<=n;i++)
{
    if(!vis[i])
    {
        dfs(i);
    }
}
memset(vis,0,sizeof(vis));
for(ll i = order.size()-1;i>=0;i--)
{
    if(!vis[order[i]])
    {
        SSC.clear();
        dfs1(order[i]);
        for(auto j:SSC)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
return 0;
}





