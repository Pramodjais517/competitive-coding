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
	ll n;
	cin>>n;
	ll a[n], dp[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
		dp[i] = a[i];
	}
	for(int i = 1;i<n;i++)
	{
		for(int j = 0;j<i;j++)
		{
			if(a[i] > a[j])
			{
				dp[i] = max(dp[i] , dp[j] + a[i]);
			}
		}
	}
	ll m = 0;
	for(auto i:dp)
	{
		m = max(m,i);
	}
	cout<<m<<"\n";
}
return 0;
}


