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
#define itr(i,ar) for(auto &i:ar)
#define show(ar) for(auto &i:ar) cout<<i<<" "


int main()
{
list<ll> l;
fie(i,1,5,1)
l.pb(i);
l.pb(5);
show(l);
l.unique();
cout<<endl;
show(l);
return 0;
}


