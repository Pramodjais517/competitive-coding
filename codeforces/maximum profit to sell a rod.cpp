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
ll getans(ll n,ll p[],ll dp[])
{
	if(n<=0)
	return 0;
	if(dp[n]!=0)
	return dp[n];
	for(int i=1;i<=n;i++)
	{
		ll ans = p[i] + getans(n-i,p,dp);
		dp[n] = max(dp[n], ans);	
	}
	return dp[n];
}
ll N;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>N;
ll p[N+1];
fi(i,1,N+1,1)
cin>>p[i];
ll dp[N+1];
memset(dp,0,sizeof(dp));
ll ans = getans(N,p,dp);
cout<<ans<<"\n";
return 0;
}

