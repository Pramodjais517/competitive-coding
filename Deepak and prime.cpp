#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(ll i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "


int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	fi(i,0,n,1)
	{
		if(i==0)
		a[i]=a[i];
		else
		a[i]+=a[i-1];
	}
	fi(i,0,n,1)
	{
		a[i] = a[i]%n;
	}
	ll f[n];
	memset(f,0,sizeof(f));
	f[0]=1;
	fi(i,0,n,1)
	{
		f[a[i]]++;
	}
	ll count=0;
	fi(i,0,n,1)
	{

		if(f[i]>1)
	    count+= (f[i]*(f[i]-1))/2;
	}
	cout<<count<"\n";
}
return 0;
}

