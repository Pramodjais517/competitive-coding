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
bool comp(pair<string, ll> a,pair<string,ll>b)
{
	if(a.second==b.second){
		return a.first < b.first; 
	}
	return a.second>b.second;
}
int main()
{
	ll n,x;
	cin>>x;
	cin>>n;
    pair <string,ll> m[100005];
	string a; ll b;
	fi(i,0,n,1)
	{
		cin>>a>>b;
			m[i].first = a;m[i].second=b;	
	} 
	sort(m,m+n,comp);
	fi(i,0,n,1)
	{if(m[i].second>=x) cout<<m[i].first<<" "<<m[i].second<<"\n";}
	
return 0;
}


