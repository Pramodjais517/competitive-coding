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
int dp[100001];


int solve(int a[],int ind,int n)
{
	if(ind >= n-1)
	return 0;
	//before it traverse each possibility
	int ans = INT_MAX;
	if(dp[ind])
	return dp[ind];
	for(int i=1;i<=a[ind];i++)
	{
		int poss = solve(a,i + ind,n);
		ans = min(ans,poss);
	}
	dp[ind] = ans+1;
	return dp[ind];
}

int main()
{
ios_base::sync_with_stdio(false);	
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	memset(dp,0,sizeof(dp));
	cout<<solve(a,0,n)<<"\n";
}
return 0;
}


