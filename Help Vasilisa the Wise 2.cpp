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
   ll r1,r2,c1,c2,d1,d2;cin>>r1>>r2>>c1>>c2>>d1>>d2;
   if(r1<=2 or r2<=2 or c1<=2 or c2<=2 or d1<=2 or d2<=2)
   {
   	cout<<-1;return 0;
   }
   ll x,y,z,l;
   ll ans =-1;
   fie(k,1,9,1)
   {
   	x = k;
   	y = r1-x;
   	z = c1-x;
  	l = r2-z;
  	if(x>0 and x<10 and y>0 and y<10 and z>0 and z<10 and l>0 and l<10 and x!=y and x!=z and x!=l and y!=z and y!=l and z!=l and l == d1-x and l==c2-y and z==c1-x and z == d2-y )
  	{
  		cout<<x<<" "<<y<<"\n"<<z<<" "<<l<<"\n";
  		return 0;
    }
   }
   cout<<ans<<"\n";   
return 0;
}


