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
	ll n,w;
	cin>>n>>w;
	ll a[n];
	ll lower = (ll)ceil(w/2.0), ind =-1;
	for(ll i=0;i<n;i++){
	cin>>a[i];
	if(a[i] >= lower and a[i] <= w)	
		ind = i+1;
	}
	if(ind!=-1)
	{
		cout<<1<<"\n";
		cout<<ind<<"\n";
	}
	else
	{
	ll sum = 0;
	set<ll> s;
	for(ll i=0;i<n;i++)
	{
		sum+=a[i];
		s.insert(i+1);
		if(sum>w)
		{
			sum-=a[i];
			s.erase(i+1);
		}
		if(sum >= lower)
		break;	
	}
	if(s.size()==0 or sum < lower)
	{
		cout<<-1<<"\n";
		continue;
	}
	cout<<s.size()<<'\n';
	for(auto i:s)
	cout<<i<<" ";
	cout<<"\n";
}
}
	
return 0;
}


