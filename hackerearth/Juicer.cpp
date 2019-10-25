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
ll n,b,d;
cin>>n>>b>>d;
ll o[n];
ll size=0,count=0;
f(i,0,n,1)
{
	cin>>o[i];
	if(o[i]<=b)
	size+=o[i];
	if(size>d)
	{
		size=0;
		count++;
	}
}
cout<<count;
return 0;
}


