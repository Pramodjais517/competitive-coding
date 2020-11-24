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
	ll n,m;
	cin>>n>>m;
	int neg = 0,sum = 0,mn = 101,val;
	fi(i,0,n,1)
	{
		fi(j,0,m,1)
		{
			cin>>val;
			if(val < 0)
			neg++;
			sum += abs(val);
			mn  = min(mn,abs(val));
		}
	}
	if(neg&1)
	cout<<sum-2*mn<<"\n";
	else
	cout<<sum<<"\n";
}
return 0;
}


