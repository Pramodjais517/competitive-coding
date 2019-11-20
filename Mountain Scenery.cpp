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
	ll n,k;
	cin>>n>>k;
	n=2*n+1;
	ll a[n];
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	ll i=1;
	while(k and i<n-1)
	{
		if(a[i]<=0 or (i+1)%2!=0 or a[i]==1 or a[i-1]>=a[i]-1 and (a[i]-1)<=a[i+1])
		{
			i++;
			continue;
		}
	    a[i]--;
        k--;
        i++;
	
	}
	fi(i,0,n,1)
	cout<<a[i]<<" ";
return 0;
}


