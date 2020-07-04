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
ll limf , limh;
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
// template ends here
ll dp[101][101][11][11];
ll getans(ll n,ll f,ll h, ll k1,ll k2)
{
	if(n==0)
	{
		return 1;
	}
	if(dp[f][h][k1][k2] != -1)
	return dp[f][h][k1][k2];
	ll x = 0;
	if(f>0 and k1>0)
	x = getans(n-1, f-1, h, k1-1, limh);
	ll y = 0;
	if(h>0 and k2>0)
	y = getans(n-1, f, h-1, limf, k2-1);
	dp[f][h][k1][k2] = (x+y) % 100000000;
	return dp[f][h][k1][k2];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t = 1;
while(t--)
{
	ll f,h;
	cin>>f>>h>>limf>>limh;
	memset(dp,-1,sizeof(dp));
	ll ans = getans(f+h, f, h ,limf, limh);
	cout<<ans<<"\n";
}
return 0;
}

