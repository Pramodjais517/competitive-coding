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
	int n;
	cin>>n;
	int a[n],lis[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		lis[i] = 1;
	}
	int ans = 0;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i] > a[j] and lis[i] < lis[j] + 1)
			{
				lis[i] = 1 + lis[j];
				ans = max(lis[i],ans);
			}
		}
	}
	if(ans == 0)
	ans = 1;
	cout<<ans<<"\n";
}
return 0;
}


