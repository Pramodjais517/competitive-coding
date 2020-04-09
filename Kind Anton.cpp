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
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll a[n],b[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	fi(i,0,n,1)
	cin>>b[i];
	bool neg=false,pos=false,flag = true;
	fi(i,0,n,1)
	{
		if(a[i]!=b[i])
		{
			if(b[i]>a[i] and !pos)
			flag = false;
			else if(b[i]<a[i] and !neg)
			flag = false;
		}
		if(a[i]>0 and !pos)
		pos = 1;
		else if(a[i]<0 and !neg)
		neg=1;
	}
	if(flag)
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
return 0;
}

