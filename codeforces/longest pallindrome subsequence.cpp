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
ll t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	ll n = s.length();
	ll dp[n+1][n+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			dp[i][j] = 0;
			if(i<2 and j>=i)
			dp[i][j] = 1;
			else if(j>=i)
			{
				ll start = j - i + 1;
				ll end = j;
				if(s[start] == s[end] and dp[i-2][j-1]==1)
				{
					dp[i][j] = 1;
				}
				else
				dp[i][j] = 0;
			}
		}
	}
	ll st = 0,en = 0;bool f=0;
	for(int i=n;i>=0;i--)
	{
		for(int j = i;j<=n;j++)
		{
			if(dp[i][j] == 1)
			{
				f = 1;
				st = i;
				en = j;
				break;
			}
		}
		if(f)
		break;
	}
	string ans = s.substr(en - st + 1 ,st);
	cout<<ans;
}
return 0;
}

