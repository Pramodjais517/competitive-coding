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

void dfs(ll v)
{
	vis[v] = 1;
	//dis[v] = d;
	for(auto child:node[v])
	{
		if(vis[child] == 0)
		{
			dfs(child);
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
vector<ll> v;
fie(i,1,n,1)
{
	vis[i] = 0;
}
ll cnt =0;
fie(i,1,n,1)
{
	if(!vis[i])
	{
		v.pb(i);
		cnt++;
		dfs(i);	
	}	
}
if(v.size() > 1)
{
	cout<<cnt - 1<<"\n";
	for(int i=0;i<v.size()-1;i++)
	{
		cout<<v[i]<<" "<<v[i+1];
		cout<<"\n";
	}
}
else
cout<<"0\n";
return 0;
}

