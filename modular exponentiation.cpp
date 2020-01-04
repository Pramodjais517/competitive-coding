#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
ll power(ll a,ll n,ll m)
{
	if(n==0)
	return 1;
	else if(n==1)
	return a;
	else
	{
		ll r = power(a,n/2,m);
		if((n&1)!=1)
		return ((r%m)*(r%m))%m;
		else 
		return ((r%m)*(a%m)*(r%m))%m;
	}
}
int main()
{
//ll t;
//cin>>t;
//while(t--)
//{

//}
ll a,n,m;
cin>>a>>n>>m;
cout<<power(a,n,m);
return 0;
}

