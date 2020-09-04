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
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	ll presum[n];
	ll postsum[n];
	presum[0] = a[0];
	fi(i,1,n,1)
	{
		presum[i] = presum[i-1] + a[i];
	}
	postsum[n-1] = a[n-1];
	fde(i,n-2,0,1)
	{
		postsum[i] = postsum[i+1] + a[i];
	}
	ll ans = -1;
	fi(i,0,n,1)
	{
		if(postsum[i] == presum[i])
		{
			ans = i;
			break;
		}
	}
	if(ans<0)
	cout<<"-1\n";
	else
	cout<<ans + 1<<"\n";
}
return 0;
}


