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
	vector<int> a;
	ll x;
	fi(i,0,n,1)
	{
		cin>>x;
		a.pb(x);
	}
	int i=0;
	while(i < n-1 and a[i] > a[i+1])
	{
		i++;
	}
	if(i==(n-1))
	{
		cout<<"No\n";
	}
	else
	cout<<"Yes\n";
}
return 0;
}


