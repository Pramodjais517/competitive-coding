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
  	ll x,y;
  	cin>>x>>y;
  	if(x==y)
	  cout<<"YES\n";
	else if(x==1 and y!=1)
	cout<<"NO\n";
	else if(x==2 and (y!=1 and y!=2 and y!=3))
	cout<<"NO\n";
	else if(x==3 and (y!=1 and y!=2))
	cout<<"NO\n";
	else 
	cout<<"YES\n"; 	

  }
return 0;
}


