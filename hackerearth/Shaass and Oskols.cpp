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
ll n;
cin>>n;
ll w[n+1];
w[0]=0;
f(i,1,n+1,1)
cin>>w[i];
ll m;
 cin>>m;
 ll i,j;
while(m--)
{
	cin>>i>>j;
	if(i==1)
		w[i+1]+=(w[i]-j);
	else if(i==n)
		w[i-1]+=(j-1);
	else
	{
		w[i-1]+=(j-1);
		w[i+1]+=(w[i]-j);
	}
	w[i]=0;
}
f(i,1,n+1,1)
cout<<w[i]<<"\n";
return 0;
}


