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
while(t--)
{
	ll n;
	cin>>n;
	vector<ll> ans;
	ll x = 1;
	while(n)
	{
	 	ll z = n%10;
	 	ans.pb(z*x);
	 	x*=10;
	 	n/=10;
	}
	vector<ll> c;
	fi(i,0,ans.size(),1)
	{
		if(ans[i]!=0)
		c.pb(ans[i]);
	}
	cout<<c.size()<<"\n";
	fi(i,0,c.size(),1)
	{
		cout<<c[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}

