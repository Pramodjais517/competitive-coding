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
ll t;
cin>>t;
while(t--)
{
	ll n,x,y;
	cin>>n>>x>>y;
	ll diff = (y -x);
	vector<ll> ans;
	ll i;
	for(i=n-1;i>=2;i--)
	{
		if((y-x)%i == 0)
		{
			break;
		}
	}
	ll gap = diff/i;
	ll temp = x;
	while(temp <= y and ans.size()<n)
	{
		ans.pb(temp);
		temp+=gap;
    } 
    temp = x - gap;
	while(temp > 0 and ans.size()<n)
	{
		ans.pb(temp);
		temp -= gap;
	}
	temp =y + gap;
	while(ans.size()<n)
	{
		ans.pb(temp);
		temp+=gap;
	}
	for(auto i:ans)
	cout<<i<<" ";
	cout<<"\n";
}
return 0;
}


