#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here

vector<ll>adj[200001];
bool mark[200001];
ll depth[200001];
ll pre[200001];

void dfs(ll s)
{
mark[s]=1;
for(ll i=0;i<adj[s].size();i++)
{
if(!mark[adj[s][i]]){
depth[adj[s][i]]=depth[s]+1;
dfs(adj[s][i]);}
}
}
int main()
{

	ll n,m;
	cin>>n>>m;
	ll l=n-m-1;
	for(ll i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	if(l==0)
	{
		cout<<m;
	}
	else
	{
	dfs(1);
	map<ll,ll>ma;
	for(ll i=1;i<=n;i++)
	ma[depth[i]]++;
	pre[n]=0;
	for(ll i=n-1;i>=1;i--)
	{
		pre[i]=pre[i+1]+ma[i];
	}
	ll ans=0;
	for(ll i=n-1;i>=1;i--)
	{
		if(pre[i]>m)
		{
			ans+=m*i+pre[i+1];
			break;
		}
		else if(pre[i]==m)
		{
			ans+=m*i;
			break;
		}
	}
	cout<<ans;
    }
return 0;
}
