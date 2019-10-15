#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,start,end) for(auto i=start;!=end;i++)

void randomize(ll array[],ll a,ll b,ll mod)
{
	for( int i=0 ; i<5000000 ; i++ )
	{
		a = 31014 * (a & 65535) + (a >> 16);
		b = 17508 * (b & 65535) + (b >> 16);
		array[i] = ((a << 16) + b) % mod;
	}
}
int main()
{
ll a,b,mod,k;
cin>>a>>b>>mod>>k;
ll array[5000000];
randomize(array,a,b,mod);
set<ll> s;
sort(array , array+5000000);
cout<<array[k-1];
return 0;
}


