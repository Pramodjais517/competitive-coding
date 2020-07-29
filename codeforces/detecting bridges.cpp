#include<bits/stdc++.h>
using namespace std;
// template starts here
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

ll N = 1000000;
vector<bool> prime(N+1,true);
ll vis[10001];
ll low[10001];
ll in[10001];
vector<ll> node[10001];

void sieve()
{
	prime[0] = false,prime[1] = false;
	for(ll i=2;i*i <= N;i++)
	{
		if(prime[i])
		{
			for(ll j = i*i; j<= N ;j+=i)
			prime[j] = false;
		}
	}
}

ll pow(ll a, ll b)
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
ll timer;
void dfs(ll v,ll par)
{
	vis[v] = 1;
	low[v] = in[v] = timer;
	timer++;
	for(auto child:node[v])
	{
		if(child == par)
		continue;
		if(vis[child] == 1)
		{
			low[v]  = min(low[v],low[child]);
		}
		else
		{
			dfs(child,v);   
			if(low[child] > in[v])
			cout<<v<<"-"<<child<<" is a bridge\n";
			else
			low[v] = min(low[child],low[v]);
		}
	}
}
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
ll a,b;
fi(i,0,m,1)
{
	cin>>a>>b;
	node[a].pb(b);
	node[b].pb(a);
}
dfs(1,-1);
return 0;
}

