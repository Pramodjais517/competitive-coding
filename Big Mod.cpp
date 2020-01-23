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

ll calc(ll b,ll p,ll m)
{
	if(p==1)
	return b;
	if(p==0)
	return 1;
	ll r = calc(b,p/2,m);
	if(p&1)
	    return (r%m*b%m*r%m)%m;
	else
	    return (r%m*r%m);
}
int main()
{
	ll b,p,m;
	while(cin>>b>>p>>m)
	{
	ll r = calc(b,p,m);
	cout<<r<<"\n";
	}
	
return 0;
}

