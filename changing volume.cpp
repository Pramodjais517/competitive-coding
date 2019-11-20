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
  ll a,b;
  cin>>a>>b;
  ll diff = abs(a-b);
  ll count=0;
  while(diff)
  {
  	if(diff>=5)
  	{
  	count+=diff/5;
  	diff = diff%5;	
	  }
	  else if(diff>=2 and diff<5)
	  {
	  	count+=diff/2;
	  	diff = diff%2;
	  }
	  else if(diff>0 and diff<2)
	  {
	  	count +=diff;
	  	diff=0;
	  }
  }
  cout<<count<<'\n';
  }
return 0;
}


