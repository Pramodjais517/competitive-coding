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
	int n;
	cin>>n;
	vector<pair<int,int>> a;
	int dp[n],x,y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		a.pb({x,y});
		dp[i] = 1;
	}
	int ans = 0;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i].first > a[j].second and dp[i] < dp[j] + 1)
			{
				dp[i] = 1 + dp[j];
				ans = max(dp[i],ans);
			}
		}
	}
	if(ans == 0)
	ans = 1;
	cout<<ans<<"\n";
return 0;
}


