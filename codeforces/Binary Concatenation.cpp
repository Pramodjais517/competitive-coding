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
string inttobin(ll a)
{
	string s = "";
	while(a>0)
	{
		if((a&1) == 0)
		s.pb('0');
		else
		s.pb('1');
		a = a>>1;
	}
	reverse(s.begin(),s.end());
	return s;
}
ll bintoint(string s)
{
	ll ans = 0;
	fi(i,0,s.length(),1)
	{
		if(s[i] == '1')
		ans += pow(2,i);
	}
	return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	cout<<inttobin(10)<<"\n";
	cout<<bintoint("1010")<<"\n";
//	ll n;
//	cin>>n;
//	ll a[n];
//	fi(i,0,n,1)
//	{
//		cin>>a[i];
//	}
}
return 0;
}

