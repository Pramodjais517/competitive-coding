#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
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
ll n,m;
cin>>n>>m;
ll a[n],b[m];
fi(i,0,n,1)
cin>>a[i];
fi(i,0,m,1)
cin>>b[i];
ll rem_hcf = 0;
for(ll i=1;i<n;i++)
{
	rem_hcf = __gcd(rem_hcf,abs(a[0] - a[i]));
}
fi(i,0,m,1)
{
	cout<<__gcd(b[i] + a[0], rem_hcf)<<" ";
}
return 0;
}


