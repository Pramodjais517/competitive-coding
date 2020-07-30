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
	ll vis[100001];
	ll dis[100001];
	vector<ll> node[100001];
	
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
	
	void dfs(ll v,ll d)
	{
		dis[v] = min(d,dis[v]);
		vis[v] = 1;
		for(auto child:node[v])
		{
			if(vis[child] == 0)
			dfs(child,d+1);
			else 
			dis[child] = min(dis[child],d+1);
		}
	}
	// template ends here
	
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
	ll a,b;
	fie(i,0,n,1)
	node[i].clear(),vis[i]=0,dis[i] = LONG_MAX;
	while(m--)
	{
		cin>>a>>b;
		node[a].pb(b);
		node[b].pb(a);
	}
	dfs(1,0);
	cout<<dis[n]<<"\n";
	}
	return 0;
	}

