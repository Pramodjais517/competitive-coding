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
		ll n;
		cin>>n;
		ll a[n];
		fi(i,0,n,1)
		cin>>a[i];
		string s[n+1];
		string tmp[2];
		tmp[0] = "zyx";
		tmp[1] = "cde";
		int f = 0;
		for(int i=0;i<n;i++)
		{
//			if(a[i]==0)
//			{
//				s[i] = tmp[f];
//				f = !f;
//			}
			while(s[i].length() < a[i])
			s[i].pb('a');
			if(a[i]!=0)
			{
				ll j = 0;
				while(s[i+1].length() < a[i])
				{
					s[i+1].pb(s[i][j]);
					j++;
				}
				
			}
			else
			{
				if((i - 1) >= 0)
				{
				s[i] = tmp[f] + s[i-1];
				f = (f+1)%3;	
				}
				else{
					s[i] = tmp[f];
					f = !f;
				}
				s[i+1] = tmp[f];
				f = !f;
			}
	
		}
		fi(i,0,n+1,1)
		{
			cout<<s[i]<<"\n";
		}
	}
	return 0;
	}
