#include<bits/stdc++.h>
using namespace std;
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

int main()
{
	ll n;cin>>n;ll a;
	map<ll,ll> m;
	fie(i,1,n,1)
	m[i]=0;
	ll x,y;
	cin>>x;fi(i,0,x,1)
	{
		cin>>a;
		m[a]=1;
	}
	cin>>y;
	fi(i,0,y,1)
	{
		cin>>a;
		m[a]=1;
	}
	fie(i,1,n,1)
	{
		if(m[i]==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
return 0;
}


