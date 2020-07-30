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
	string s;
	cin>>s;
	ll a[10];
	memset(a,0,sizeof(a));
	map<ll,ll> m;
	char x[] = {'0','1','2','3','4','5','6','7','8','9'};
	ll ans  = INT_MAX;
	for(int i=0;i<10;i++)
	{
		for(int j = 0;j<10;j++)
		{
			
			char  l = x[i];
			char m = x[j];
			ll cnt =0 ;
			bool f = 0;
			for(int k =0;k<s.length();k++)
			{
				if(f==0 and s[k]==l)
				{
					cnt++;
					f = 1;
				}
				else if(f==1 and s[k]==m)
				{
					cnt++;
					f =0;
				}
			}
			ans = max(ans, s.length() - cnt);
		}
	}
	cout<<ans<<"\n";
}
return 0;
}

