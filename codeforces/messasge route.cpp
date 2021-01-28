#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 10000000074

vector<ll> graph[100001];
bool vis[100001];
map<ll,ll> mp;
ll n, m;

void bfs(int src)
{
    queue<int> q;
    vis[src] = 1;
    q.push(src);
    while(!q.empty())
    {
        int point = q.front();
        q.pop();
        for(auto child:graph[point])
        {
            if(!vis[child])
            {
                vis[child] = 1;
                q.push(child);
                mp[child] = point;
                if(child == n)
                return;
            }
        }
    }
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
while(m--)
{
    ll a,b;
    cin>>a>>b;
    graph[a].pb(b);
    graph[b].pb(a);
}
bfs(1);
if(!vis[n])
{
    cout<<"IMPOSSIBLE";
}
else
{
    vector<int> path;
    int temp = n;
    while(n>1)
    {
        path.pb(mp[n]);
        n=mp[n];
    }
    reverse(path.begin(),path.end());
    path.pb(temp);
    cout<<path.size()<<"\n";
    for(auto i:path)
    {
        cout<<i<<" ";
    }
}
return 0;
}





