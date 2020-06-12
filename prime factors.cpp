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

ll pow(ll a,ll b)
{
	if(b==1)
	return a;
	if(b==0)
	return 1;
	ll val = pow(a,b/2);
	if(b%2==1)
	return val*a*val;
	else
	return val*val;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<pow(a,b);
return 0;
}

