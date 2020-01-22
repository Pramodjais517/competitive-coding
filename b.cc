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
ll t;
cin>>t;
while(t--)
{
 ll n;cin>>n;
 multimap<ll,ll> m;
 ll x,y;
 pos = 0;
 fi(i,0,n,1)
 {
 	cin>>x>>y;
 	m.insert(pair<ll,ll>(x,y));
 }
 int flag=0,f=0;
 itr(i,m)
 {
 	auto x = i;
 	x++;
 	if(i->first == x->first and i->second < x->second)
 	cout<<"YES\n";
 	else  if(i->second == x->second and i->first > x->first)
 	cout<<"YES\n";
 	else
 	{
 		cout<<"NO\n";
 		f=1;
 		break;
	 }
	 if(f==1)
	 {
	 	flag=1;
	 	break;
	 }
 }
 if(flag==1)
 {
 	continue;
 }
 itr(i,m)
 {
 	if(pos == i->first)
 	{
 	  	
	 }
 }
}
return 0;
}

