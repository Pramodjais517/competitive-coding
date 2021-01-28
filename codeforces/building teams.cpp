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
map<ll,ll> m;
vector<ll> path;
 
bool dfs(ll c,ll p)
{
	vis[c] = 1;
	m[c] = p;
	for(auto child:graph[c])
	{
		if(!vis[child])
		{
		    if(dfs(child,c))
		    return true;
        }
        else
        {
            if(child != p)
            {
                path.pb(child);
                while(c>0 and c != child)
                {
                    path.pb(c);
                    c = m[c];
                }
                path.pb(child);
                return 1;
            }
        }
	}
	return 0;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
memset(vis,0,sizeof(vis));
ll a,b;
while(m--)
{
	cin>>a>>b;
	graph[a].pb(b);
	graph[b].pb(a);
}
bool f =0;
for(int i=1;i<n;i++)
{
    if(!vis[i])
    if(dfs(i,-1))
    {
        f = 1;
        break;
    }
}
if(f)
{
    cout<<path.size()<<"\n";
    for(auto i:path)
    cout<<i<<" ";
}
else
cout<<"IMPOSSIBLE";
return 0;
}
 
