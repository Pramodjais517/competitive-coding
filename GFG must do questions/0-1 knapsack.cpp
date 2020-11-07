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
	int n,w;
	cin>>n>>w;
	int weight[n+1],val[n+1];
	fi(i,1,n+1,1)
	cin>>val[i];
	fi(i,1,n+1,1)
	cin>>weight[i];
	int dp[n+1][w+1];
	fi(i,0,n+1,1)
	{
		fi(j,0,w+1,1)
		{
			if(i==0 or j==0)
			{
				dp[i][j] = 0;
				continue;
			}
			else  if(j >= weight[i])
			{
				dp[i][j] = max(dp[i-1][j],val[i] + dp[i-1][j-weight[i]]);
			}
			else
			{
				dp[i][j] = dp[i-1][j]; // weight is more than the capacity of bag
			}
		}
	}
	cout<<dp[n][w]<<"\n";
}
return 0;
}


