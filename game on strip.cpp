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
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	ll cnt = 0;
	vector<ll> count;
	ll i=0;
	while(i<n)
	{
		if(a[i]==0)
		{
			while(i<n and a[i]==0)
			{
				cnt++;
				i++;
			}
			count.pb(cnt);
			cnt = 0;
		}
		else
		i++;
	}
	if(count.size() == 0)
	{
		cout<<"No\n";
		continue;
	}
	sort(count.begin(),count.end(),greater<ll>());
	if(count.size() > 1)
	{
		ll l = count[0];
		ll s = count[1];
		if(l%2 == 0)
		{
			cout<<"No\n";
		}
		else
		{
			if(l/2 < s)
			{
				cout<<"No\n";
			}
			else
			{
				cout<<"Yes\n";
			}
		}
	}
	else
	{
		if(count[0] % 2 == 0)
		{
			cout<<"No\n";
		}
		else
		cout<<"Yes\n";
	}
}
return 0;
}

