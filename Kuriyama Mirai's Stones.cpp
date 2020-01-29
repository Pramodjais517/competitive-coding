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
void presum(ll ar[],ll n)
{
	fi(i,1,n,1)
	ar[i] +=ar[i-1];
	return;
}
int main()
{
ll n;
cin>>n;
ll ar[n];
fi(i,0,n,1)
cin>>ar[i];
ll dec[n];
fi(i,0,n,1)
dec[i] = ar[i];
sort(dec,dec+n);
presum(ar,n);
presum(dec,n);
ll m;
cin>>m;
ll l,r;
while(m--)
{
int t;
cin>>t;cin>>l>>r;

if(t==1)
{	
	if(l!=1)
	cout<<(ar[r-1]-ar[l-2])<<"\n";
	else
	cout<<ar[r-1]<<"\n";
}
else
{
	if(l!=1)
	cout<<(dec[r-1]-dec[l-2])<<"\n";
	else
    cout<<dec[r-1]<<"\n";
}	
}
return 0;
}

