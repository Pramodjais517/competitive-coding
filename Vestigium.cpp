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

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here


int main()
{
ll t;
cin>>t;
ll c =1;
while(c<=t)
{
	ll n;
	cin>>n;
	ll m[n][n];
	ll tr= 0,repr=0,repc=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
			if(i==j)
			tr+=m[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		map<ll,ll> mp;
		for(int j=0;j<n;j++)
		{
			mp[m[i][j]]++;
		}
		for(auto itr=mp.begin();itr!=mp.end();itr++)
		{
			if(itr->second > 1)
			{
				repr++;
				break;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		map<ll,ll> mp;
		for(int i=0;i<n;i++)
		{
			mp[m[i][j]]++;
		}
		for(auto itr=mp.begin();itr!=mp.end();itr++)
		{
			if(itr->second > 1)
			{
				repc++;
				break;		
			}
		}
	}
	cout<<"Case #"<<c<<": "<<tr<<" "<<repr<<" "<<repc<<"\n";
	c++;
}
return 0;
}

