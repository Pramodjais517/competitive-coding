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
ll getans(ll n, ll dp[])
{
	if(n<=1)
	return 0;
	if(dp[n]!=0)
	{
		return dp[n];
	}
	ll x = INT_MAX;
	if(n%3==0)
	x = 1 + getans(n/3,dp);
	ll y = INT_MAX;
	if(n%2 == 0)
	y = 1 + getans(n/2,dp);
	ll z = 1 + getans(n-1,dp);
	dp[n] = min(z,min(y,x));
	return dp[n];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll dp[n+1];
memset(dp,0,sizeof(dp));
ll ans = getans(n, dp);
fi(i,0,n+1,1)
cout<<dp[i]<<" ";
cout<<ans<<"\n";
return 0;
}

