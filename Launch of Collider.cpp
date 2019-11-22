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
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll a[n];
   fi(i,0,n,1)
   {
   	cin>>a[i];
   }
   int f=0;
   ll pos=-1;ll m =LLONG_MAX,ans=-1;
   fi(i,0,n,1)
   {
   	if(s[i]=='R')
   	{
   		pos=a[i];
   		f=1;
	   }
   	if(f)
   	{
   	 if(s[i]=='R')
   	 pos=a[i];
   	 else if(s[i]=='L'){
   	 	m = min(m,(a[i]-pos)/2);
   	 	ans=m;
		}
	   }
   }
   cout<<ans;
return 0;
}


