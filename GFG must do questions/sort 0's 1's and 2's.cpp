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
	ll cnt[3];
	ll x = 0;
	fi(i,0,n,1)
	{
		cin>>x;
		cnt[x]++;
	}
	fi(i,0,n,1)
	{
		if(cnt[0] > 0)
		a[i] = 0,cnt[0]--;
		else if(cnt[1]>0)
		a[i] = 1,cnt[1]--;
		else
		a[i] = 2,cnt[2]--;
	}
	fi(i,0,n,1)
	cout<<a[i]<<" ";
	cout<<"\n";
}
return 0;
}


