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
  	ll n;
  	cin>>n;
  	ll zero=0;
  	while(n%10==0)
  	{
  		n=n/10;
  	    zero++;	
	}
	ll x=1;
	int count=0;
	while(x<n)
	{
		x*=2;
		count++;
	}
	if((x==n and zero==count) or x==1)
	cout<<"Yes\n";
	else
	cout<<"No\n";
  }
return 0;
}


