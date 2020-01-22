#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
   ll s,w1, w2, w3;
   cin>>s>>w1>>w2>>w3;
   if((w1+w2+w3)<=s)
   {
   	cout<<1<<"\n";
   	continue;
   }
   if((w1+w2)<=s)
   cout<<2<<"\n";
   else if((w2+w3)<=s)
   cout<<2<<"\n";
   else
   cout<<3<<"\n";
   
}
return 0;
}

