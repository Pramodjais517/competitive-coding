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
	ll n;
	cin>>n;
	ll a[n];
	ll sum=0;
	fi(i,0,n,1)
	{
		cin>>a[i];sum+=a[i];
	}
	sort(a,a+n);
	ll c=0, count=0,i=n-1;
	while(c<=(sum-c))
	{
		c+=a[i--];count++;
	}
	cout<<count;
return 0;
}


