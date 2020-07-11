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
ll k;
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
ll dp[100001];
ll getans(ll n)
{
	if(n<=0)
	return 1;
	if(dp[n] != -1)
	return dp[n];
	//W
	ll ans = 0;
	if(n>=k)
	ans += getans(n - k);
	// K
	ans += getans(n - 1);
	dp[n] = ans;
	return ans;
}
ll final(ll dp[])
{
	fi(i,1,100001,1)
	dp[i] = dp[i-1] + dp[i];
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n>>k;
//memset(dp, -1, sizeof(dp));
//getans(100001);
//dp[0] = 0;
//fi(i,0,100001,1)
//{
//	cout<<dp[i]<<" ";
//}
//final(dp);	
ll a, b;
while(n--){
	cin>>a>>b;
	cout<<(dp[b] - dp[a-1])<<"\n";
}
return 0;
}

