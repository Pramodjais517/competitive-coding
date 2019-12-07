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
bool comp(const pair<ll,ll> &a , const pair<ll,ll> &b)
{
	return (a.second > b.second);
}
int main()
{
   ll n,m;cin>>n>>m;
   vector<pair<ll,ll> > p(m);
   ll a,b;
   fi(i,0,m,1)
   {
   	cin>>a>>b;
   	p.pb(mp(a,b));
   }
   sort(p.begin(),p.end(),comp);
   ll res=0;
   int i=0;
   while(n>0 and i<m)
   {
   		if(n>=p[i].first)
   		res+= p[i].first*p[i].second;
   		else
   		res+=n*p[i].second;
   		n-=p[i].first;
   		i++;
   }
   cout<<res;
return 0;
}


