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
ll dis[10001];
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

bool dfs(ll v,ll c)
{
	vis[v] = 1;
	dis[v] = c;
	for(auto child:node[v])
	{
		if(vis[child] == 0)
		{
			if(dfs(child , !c) == false)
			return false;
		}
		else if(dis[child] == dis[v])
		{
			return false;
		}
	}
	return true;
}
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
ll j=1;
while(j<=t)
{
	ll n,m;
	cin>>n>>m;
	ll a,b;
	fi(i,0,m,1)
	{
		cin>>a>>b;
		node[a].pb(b);
		node[b].pb(a);
	}
	bool ans = true;
	fie(i,1,n,1)
	{
		if(!vis[i])
		{
		 	ans = dfs(i,0);
			if(ans == false)
			{
				break;
			}
		}
	}
	cout<<"Scenario #"<<j<<":\n";
	if(ans == false)
	{
		cout<<"Suspicious bugs found!\n";
	}
	else
	{
		cout<<"No suspicious bugs found!\n";
	}
	
}
return 0;
}

