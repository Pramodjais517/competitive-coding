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


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
ll sum;
cin>>sum>>n;
ll coin[n+1];
fi(i,1,n+1,1)
cin>>coin[i];
ll dp[n+1][sum+1];
memset(dp,0,sizeof(dp));
fie(j,1,sum,1)
{
	if(j%coin[1]==0)
	dp[1][j] = j/coin[1];
	else
	dp[1][j] = -1;
}
fie(i,2,n,1)
{
	fie(j,0,sum,1)
	{
		if(j<coin[i])
		dp[i][j] = dp[i-1][j];
		else
		{
			dp[i][j] = min(dp[i-1][j],1+dp[i][j-coin[i]]);
		}
	}
}
cout<<dp[n][sum]<<"\n";
return 0;
}

