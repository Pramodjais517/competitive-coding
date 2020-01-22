#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll t;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll a,b,c,d,e;
   ll num = pow(10,n);
   cin>>a;
   ll m = (2*(num))+a;
   cout<<m<<"\n";
   fflush(stdout);
   cin>>b;
   c=num-b;
   cout<<c<<"\n";
   fflush(stdout);
   cin>>d;
   cout<<num-d<<"\n";
   fflush(stdout);
   ll ans;
   cin>>ans;
   if(ans==-1)
   exit(0);
   else
   continue;
   fflush(stdout);
}
return 0;
}

