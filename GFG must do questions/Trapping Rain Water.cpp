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
	fi(i,0,n,1) cin>>a[i];
	ll max_left = a[0],max_right = INT_MIN;
	ll water = 0;
	fi(i,1,n-1,1)
	{
		for(int j = 0;j<i;j++)
		max_left = max(max_left,a[j]);
		for(int j = i+1;j<n;j++)
		max_right = max(max_right,a[j]);
		ll level = min(max_left,max_right);
		if((level - a[i]) > 0)
		water+=(level - a[i]);
	}
	cout<<water<<"\n";
}
return 0;
}


