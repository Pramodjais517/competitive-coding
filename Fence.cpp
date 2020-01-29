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
//ll t;
//cin>>t;
//while(t--)
//{
//}
ll n,k;
cin>>n>>k;
ll a[n];
fi(i,0,n,1)
cin>>a[i];
ll in=0;
ll sum=0,m=1000000000;
for(ll i=0;i<k;i++)
{
	sum += a[i];
}
if(sum<m)
{
	in=0;
	m = sum;
}
for(ll i=k;i<n;i++)
{
	sum = (sum+a[i])-a[i-k];
	if(sum < m)
	{
		m = sum;
		in = i-k+1;
	}
}
cout<<in+1;
return 0;
}

