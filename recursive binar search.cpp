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

int bin_search(ll a[],ll s,ll start, ll end)
{
	int mid = (start+end)/2;
	if(a[mid]==s)
	return mid;
	if(mid<start or mid>end)
	return -1;
	else 
	if(a[mid]<s)
	return bin_search(a, s,mid+1,end);
	return bin_search(a,s,0,mid-1);
}

int main()
{
ll n;
cin>>n;
ll a[n];
fi(i,0,n,1)
cin>>a[i];
ll s;
cin>>s;
sort(a,a+n);
cout<<bin_search(a,s,0,n-1);
return 0;
}

