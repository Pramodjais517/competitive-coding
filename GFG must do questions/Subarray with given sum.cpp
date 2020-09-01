#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
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
ll t;
cin>>t;
while(t--)
{
	ll n,sum;
	cin>>n>>sum;
	ll a[n];
	ll s = 0;
	fi(i,0,n,1)
	{
		cin>>a[i];
    }
	ll p1=0,p2=0;
	bool f = 0;
	while(p2<n and p1<=p2)
	{
		if(s < sum)
		{
		    s += a[p2];
		    p2++;
		}
		if(s > sum and p1 <= p2)
		{
			s -= a[p1];
			p1++;
		}
		if(s==sum)
		{
			f = 1;
			break;
		}
	}
	if(f)
	{
		cout<<p1+1<<" "<<p2<<"\n";
	}
	else cout<<"-1\n";
	
}
return 0;
}


