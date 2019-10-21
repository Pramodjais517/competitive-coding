#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
bool compare(ll a, ll b)
{
	return a>b;
}
void findpairs(ll a[],ll k,ll n)
{
	ll count=0;
f(i,0,n,1)
{
	f(j,i+1,n,1){
		if(a[i]-a[j]==k)
		count++;
	}
}
cout<<count;
}
int main()
{
ll n,k;
cin>>n>>k;
ll a[n];
f(i,0,n,1)
cin>>a[i];
sort(a,a+n,compare);
findpairs(a,k,n); 
return 0;
}


