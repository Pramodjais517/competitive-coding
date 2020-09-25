#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll count_one = 0,count_zero = 0;
while(n>0)
{
	ll dig = n&1;
	if(dig==1)
	count_one++;
	else
	count_zero++;
	n = n>>1;		
}
if(count_one==1 and count_zero%2==0)
{
	cout<<"Yes\n";
}
else
{
	cout<<"No\n";
}
return 0;
}


