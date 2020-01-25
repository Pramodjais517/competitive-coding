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


int main()
{
ll n,l;
cin>>n>>l;
ll a[n];
fi(i,0,n,1)
cin>>a[i];
//if(n==1)
//{
// cout<<l-a[0];
// return 0;
//}
sort(a,a+n);
double md;
if(a[0]==0)
md = 0;
else
md = a[0]-0;	
fi(i,0,n-1,1)
{
	double x = (double)(a[i+1]-a[i])/2.0;
	if( x > md)
	md = x;
}
if(a[n-1]!=l)
{
	double x = (l - a[n-1]);
	if(x > md)
	md = x;
}
double ans = md;
cout<<fixed<<setprecision(10)<<ans;
return 0;
}

