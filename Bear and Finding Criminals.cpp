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
   ll n,m;
   cin>>n>>m;
   ll a[n];
   fi(i,0,n,1)
   cin>>a[i];
   m-=1;ll res;
   if(a[m])
   res=1;
   else
   res=0;
   fie(i,1,max(abs(n-m),abs(m-0)),1)
   {
   	    if((m-i)>=0 and (m+i)<n)
	    {
	   	if(a[m-i]==1 and a[m+i]==1)
	   	res+=2;
        }
	   else if((m-i)<0 and (m+i)<n and a[m+i]==1 )
	   res++;
	   else if((m-i)>=0 and (m+i)>=n and a[m-i]==1)
	   res++; 
   }
   cout<<res;
return 0;
}


