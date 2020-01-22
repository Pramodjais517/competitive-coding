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
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	vector<pair<ll,ll>> a;ll x,y;
	a.pb(mp(0,0));
	fi(i,0,n,1)
	{
		cin>>x>>y;
		a.push_back(make_pair(x,y));
	}
	sort(a.begin(),a.end());
	int f=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].first > a[i+1].first or a[i].second >  a[i+1].second)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"NO\n";
	}else
	{
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			int dx = a[i+1].first - a[i].first;
			int dy  = a[i+1].second - a[i].second;
			while(dx -- )
			{
				cout<<"R";
			}
			while(dy--)
			{
				cout<<"U";
			}
		}
		cout<<"\n";
	}
}
return 0;
}

