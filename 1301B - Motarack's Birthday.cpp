#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			if(i==0)
			{
				if(a[i+1]==-1)
				v.push_back(a[i]);
			}
			else if(i==n-1)
			{
				if(a[i-1]==-1)
				v.pb(a[i]);
			}
			else if(a[i-1]==-1 or a[i+1]==-1)
			v.pb(a[i]);	
		}
	}
	sort(v.begin(),v.end());
	ll m=0;
	if(v.size()!=0)
	m = (v[v.size()-1]+v[0])/2;
	for(ll i=0;i<n;i++)
	{
		if(a[i] == -1)
		a[i]=m;
	}
	ll dif=0;
	for(ll i = 0 ; i < n-1 ; i++)
	{
	 dif = max(dif,abs(a[i+1]-a[i]));	
	}
	cout<<dif<<" "<<m<<"\n";
  }
return 0;
}

