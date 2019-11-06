#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
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
  	ll a,b,n,s;
  	cin>>a>>b>>n>>s;
  		if(s%n<=b and a*n+b>=s)
  			cout<<"YES\n";
  		else 
  		cout<<"NO\n";
	 }
return 0;
}


