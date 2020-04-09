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
ll count =0 ;
ll maze(char a[][1001],ll i,ll j,ll n, ll m)
{	
	if(i==n-1 and j == m-1)
	{
		//print the matrix
		return 1;
	}
	if(j>m or i>n)
	{
		return 0;
	}
	if(a[i][j]=='1')
	{
		return 0;
	}
	return maze(a,i,j+1,n,m) + maze(a,i+1,j,n,m);
}

int main()
{
	ll n;
	cin>>n;
	char a[1001][1001];
	for(ll i=0;i<n;i++)
	for(ll j=0;j<n;j++)
	cin>>a[i][j];
	cout<<maze(a,0,0,n,n)<<"\n";
return 0;
}

