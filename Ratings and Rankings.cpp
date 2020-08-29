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
	ll n,m;
	cin>>n>>m;
	ll init[n];
	fi(i,0,n,1)
	{
		cin>>init[i];
	}
	ll rate[n][m];
	ll rank[n][m];
	memset(rank,0,sizeof(rank));
	memset(rate,0,sizeof(rate));
	ll dr = 0;
	fi(i,0,n,1)
	{
		ll curr_rate = init[i];
		fi(j,0,m,1)
		{
			cin>>dr;
			rate[i][j] = curr_rate + dr;
			curr_rate = rate[i][j];
		}
	}
	fi(i,0,m,1)
	{
		map<ll,ll> mp;
		fi(j,0,n,1)
		{
			mp[rate[j][i]]++;
		}
		map<ll, ll> rmp;
		ll in = 1;
		for (auto r = mp.rbegin(); r != mp.rend(); ++r)
		{
		rmp[r->first] = in;
		in += r->second;
		}
		in = 1;
//		for (auto r = mp.rbegin(); r != mp.rend(); ++r)
//		{
			fi(j,0,n,1)
			{
				rank[j][i] = rmp[rate[j][i]];
			}
//			in+=r->second;	
//		}
	}
	ll ans =0;
	ll hrate = 0;
	ll hratemonth = 0;
	ll hrank = LONG_MAX;
	ll hrankmonth = 0;
	fi(i,0,n,1)
	{
		hrate = 0;
		hratemonth = 0;
		hrank = LONG_MAX;
		hrankmonth = 0;
		fi(j,0,m,1)
		{
			if(rate[i][j] > hrate)
			{
				hrate = rate[i][j];
				hratemonth = j+1;
			}
			if(rank[i][j] < hrank )
			{
				hrank = rank[i][j];
				hrankmonth = j + 1;
			}
		}
		if(hrankmonth != hratemonth)
		ans++;
	}
//	fi(i,0,n,1)
//	{
//		fi(j,0,m,1)
//		{
//			cout<<rate[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//	fi(i,0,n,1)
//	{
//		fi(j,0,m,1)
//		{
//			cout<<rank[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
	cout<<ans<<'\n';
} 	
return 0;
}

