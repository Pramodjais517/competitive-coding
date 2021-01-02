#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007;


ll fact(ll n) {
        return n ? fact(n - 1) * n % (ll)(1e9 + 7) : 1;
    }
int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll dp[n+1][m+1];
	for(ll i=k+1;i<=n;i++){
		for(int j = i;j<=m;j++)
		{
			if(i==j  or i==(k+1))
			{
				dp[i][i] = fact(i);
			}
			else
			{
				dp[i][j] = (dp[i-1][j-1] * i + dp[i][j-1] * (i-k)) %mod;
			}
		}
	}
	cout<<dp[n][m]<<"\n";
}
return 0;
}


