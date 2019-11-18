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
	ll n;cin>>n;
	map<string,ll> m;
	string s;
	fi(i,0,n,1)
	{
		cin>>s;
		m[s]++;
	}
	ll ma=LLONG_MIN;
	string team="";
	itr(i,m){
		if(i->second>ma)
		{
			ma=i->second;
			team = i->first;
		}
	}
	cout<<team;
return 0;
}


