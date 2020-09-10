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

ll digsum(ll n)
{
	ll sum = 0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n,s;
	cin>>n>>s;
	ll ipow10[19];
	ipow10[0] = 1;
	fi(i,1,19,1)
	ipow10[i] = ipow10[i-1] * 10;
	ll i=0,ans = 0;
	while(n>0)
	{
		if(digsum(n) <= s)
		{
			break;
		}
		ll x =0;
		if(n%10 != 0)
		{
		    x = n%10;
			ans += (ipow10[i] * (10 - x));	
			n+=(10 - x);
		}
		n/=10;
		i++;
	}
	cout<<ans<<"\n";
}
return 0;
}


