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
while(cin>>n, n)
{
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	ll c=0;
	fi(i,0,n,1)
	{
		fi(j,i,n,1)
		{
			if(__gcd(a[i],a[j])==1)
			c++;
		}
	}
	if(c==0)
	cout<<"No estimate for this data set.\n";
	else{
		ll s = (n*(n-1)/2);
		double pi = sqrt((double)6*s/c);
        printf("%.6lf\n", pi);
	}
}
return 0;
}

