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
ll n;
cin>>n;
ll prob=0;
ll count=0,r;
while(n--)
{
	count=0;
	for(int i=0;i<3;i++)
	{
		cin>>r;
		if(r==1)
		count++;
	}
	if(count>=2)
	prob++;
}
cout<<prob;
return 0;
}


