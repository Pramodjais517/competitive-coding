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
   string s;cin>>s;
   ll count,o=0,z=0;
   fi(i,0,s.length(),1)
   {
   	if(s[i]=='1')
   	o++;
   	else
   	z++;
   }
   if(o==1)
   {
   	cout<<ceil((s.length()-1)/2.0);
   }
   else if(z==s.length())
   cout<<0;
   else cout<<ceil(s.length()/2.0);
   return 0;
}


