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
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = INT_MAX;
	for(int i=0;i<n;i++)
	{
		int remove = 0;
		for(int j = i;j<n;j++)
		{
			if(arr[j] < arr[i])
			{
				if((arr[i] - arr[j]) > k)
				remove+= arr[i]- ( k + arr[j]);
			}
			else 
			{
				if((arr[j] - arr[i]) > k)
				remove+= arr[j] - (k+arr[i]);
			}
		}
		ans = min(ans,remove);
	}
	cout<<ans<<"\n";
}
return 0;
}


