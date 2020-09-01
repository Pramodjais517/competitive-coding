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
	ll a[n],b[m];
	fi(i,0,n,1)
	cin>>a[i];
	fi(i,0,m,1)
	cin>>b[i];
	for(ll i = m-1;i>=0;i--)
	{
		ll last = a[n-1],j;
		for(j = n-2;j>=0 and a[j] > b[i];j--)
		{
			a[j+1] = a[j];
		}
		if(j!= n-2 or last > b[i])
		{
			a[j+1] = b[i];
			b[i] = last;
		}
	}
	for(ll i=0;i<n;i++)
	cout<<a[i]<<" ";
	for(ll j=0;j<m;j++)
	cout<<b[j]<<" ";
	cout<<"\n";
}
return 0;
}


