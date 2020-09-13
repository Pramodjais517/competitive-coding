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
ll n;
cin>>n;
ll a[n];

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
{
	for(int j=0;j<(n-i-1);j++)
	{
		if(a[j] > a[j+1])
		{
			swap(a[j+1],a[j]);
		}
	}
}
fi(i,0,n,1)
cout<<a[i]<<" ";
return 0;
}


