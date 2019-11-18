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

bool comp(pair<ll,ll> a,pair<ll,ll> b){
	return a.second < b.second;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    fi(i,0,n,1)
    cout<<p[i].first<<" "<<p[i].second<<"\n";
  }
return 0;
}


