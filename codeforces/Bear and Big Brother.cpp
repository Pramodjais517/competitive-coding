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
ll a,b;
cin>>a>>b;
ll i=0;
while(a<=b)
{
	a*=3;
	b*=2;
	i++;
}
cout<<i;
return 0;
}


