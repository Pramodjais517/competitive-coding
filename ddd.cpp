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
ll cal(ll a,ll b,ll c)
{
	ll x = pow(abs(a-b),2ll);
	ll y = pow(abs(b-c),2ll);
	ll z = pow(abs(c-a),2ll);
	return x+y+z;
}

int main()
{
ll t;
cin>>t;
while(t--)
{
	ll nr,ng,nb;
	cin>>nr>>ng>>nb;
	ll R[nr],G[ng],B[nb];
	fi(i,0,nr,1)
	cin>>R[i];
	fi(i,0,ng,1)
	cin>>G[i];
	fi(i,0,nb,1)
	cin>>B[i];
	ll ptr1=0,ptr2=0,ptr3=0,ans = LLONG_MAX;
	sort(R,R+nr,greater<ll>());
	sort(G,G+ng,greater<ll>());
	sort(B,B+nb,greater<ll>());
	while(ptr1<nr and ptr2<ng and ptr3<nb)
	{
		ans = min(ans,cal(R[ptr1],G[ptr2],B[ptr3]));
		if(R[ptr1]>G[ptr2]and R[ptr1] > B[ptr3])
		ptr1++;
		else if(G[ptr2]>R[ptr1] and G[ptr2]> B[ptr3])
		ptr2++;
		else
		ptr3++;
	}
	cout<<ans<<"\n";
}
return 0;
}

