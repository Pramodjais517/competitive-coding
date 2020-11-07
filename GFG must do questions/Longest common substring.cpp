#include<bits/stdc++.h>
using namespace std;
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
	string s1,s2;
	cin>>s1>>s2;
	ll dp[n+1][m+1];
	fi(i,0,n+1,1)
	{
		dp[i][0] = 0;
	}
	fi(i,0,m+1,1)
	{
		dp[0][i] = 0;
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			if(s1[i-1] == s2[j-1])
			{
				dp[i][j] = dp[i-1][j-1] +  1;
			}
			else
			dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[n][m]<<"\n";
}
return 0;
}


