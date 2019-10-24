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
ll n,k;
cin>>n>>k;
ll l=n%10;
ll am=0;
if(l!=0)
{
f(i,1,11,1)
{
	if((l*i)%10==k)
	{
		am=i;
		break;
	}
}
if(am!=0)
cout<<am;
else{
	ll i=1;
	while(n%10!=0)
	n*=i++;
	cout<<i-1;
}
}
else
cout<<1;
return 0;
}


