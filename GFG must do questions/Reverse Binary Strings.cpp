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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	int zc = 0,oc = 0;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='0' and s[i+1]=='0')
		zc++;
		if(s[i]=='1' and s[i+1]=='1')
		oc++;
	}
	cout<<max(zc,oc)<<"\n";	
}
return 0;
}


