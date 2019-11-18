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
   ll n;cin>>n; ll t;cin>>t;ll l,r,b;fi(i,0,n,1){
   	cin>>l>>r;
   	if(l==r or (7-l)==r or 7-l==t or r==t or r==7-t or l==t or 7-t==l)
	   {
	   	cout<<"NO\n";
	   	return 0;
	   }
   t=(7-t);
   }
   cout<<"YES\n";
return 0;
}


