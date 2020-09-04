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
	vector<pair<ll,ll>> time;
	ll a[n],b[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	fi(i,0,n,1)
	{
		cin>>b[i];
		time.pb({a[i],b[i]});	
	}
	sort(time.begin(), time.end());
	vector<pair<ll,ll> > plat;
	for(ll i=0;i<n;i++)
	{
		bool f =0;
		ll j;
		for(j=0;j<plat.size();j++)
		{
			if(time[i].second < plat[j].first or time[i].first > plat[j].second)
			{
				f = 1;
				break;
			}
		}
		if(!f)
		{
	        plat.pb({time[i].first,time[i].second});
		}
		else
		{
			plat[j].first = min(plat[j].first, time[i].first);
			plat[j].second = max(plat[j].second,time[i].second);
		}
	}
	cout<<plat.size()<<"\n";
	}
return 0;
}


