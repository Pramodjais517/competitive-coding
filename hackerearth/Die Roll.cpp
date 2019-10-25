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
ll y,w;
cin>>y>>w;
ll sec = max(y,w);
ll req=6-sec+1;
if(req==6)
cout<<"1/1";
else
{
	if(req==2)
	cout<<1<<"/"<<3;
	else if(req==3)
	cout<<1<<"/"<<2;
	else if(req==4)
	cout<<2<<"/"<<3;
	else
	cout<<req<<"/"<<6;
}
return 0;
}


