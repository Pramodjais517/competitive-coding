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
   set<ll> s;
   while(t--)
   {
   	ll n;
   	cin>>n;
   	ll a[n];
   	fi(i,0,n,1)
   	cin>>a[i];
   fi(i,0,n,1)
   {
   	s.insert(a[i]);
   }
   ll count=0;
   for(int i=0;i<n;i++)
   {
   	if(s.find((a[i]-1))==s.end() and s.find(a[i]+1)==s.end())
   	{
	s.insert(a[i]+1);count++;
    }
   }
   cout<<count<<"\n";
   }
}


