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
   ll ar[32];
   memset(ar,0,sizeof(ar));
   int i=31;
   while(n and i>=0)
   {
   	if(n&1)
   	ar[i]=1;
   	else
   	ar[i]=0;
   	n=n>>1;
   	i--;
   }
   ll j=0;ull num=0;
   fi(i,0,32,1)
   {
   if(ar[i]==0)
   ar[i]=1;
   else
   ar[i]=0;
   }
   fde(i,31,0,1)
   {
   	if(ar[i]!=0)
   	num+=(pow(2,j));
   	j++;
   }
   cout<<num<<'\n';
  }
return 0;
}


