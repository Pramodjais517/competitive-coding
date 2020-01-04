#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

ll gcd(ll a,ll b)
{
	if(b==0)
	return a;
	return gcd(b,b%a);
}
int main()
{
//ll t;
//cin>>t;
//while(t--)
//{

//}
ll a,b;
cin>>a>>b;
cout<<(a*b)/gcd(a,b);
return 0;
}

