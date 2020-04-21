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
	ll x,n,m;
	cin>>x>>n>>m;
	if(x<=10)
	{
	   if(n>0 and m==0)
	   {
	   	 cout<<"NO\n";
		 continue;
	   }
	   else if(m>0)
	   {
	   	cout<<"YES\n";
	   	continue;
	   }
	}
	while(x>0 and n>0)
	{
		x = floor(x/2)+10;
		n--;
	}
	if(x>0)
	{
		while(x>0 and m>0)
		{
		 x-=10;	
		 m--;
		}
	}
	if(x>0)
	cout<<"NO\n";
	else
	cout<<"YES\n";
}
return 0;
}

