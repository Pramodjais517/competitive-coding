#include<bits/stdc++.h>

using namespace std;
// template starts here
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
	ll w,h,n;
	cin>>w>>h>>n;
	int cnt = 1;
	while(w%2 == 0 and w>0)
	{
		cnt= 2*cnt;
		w/=2;
	}
	while(h%2 ==0 and h>0)
	{
		cnt = 2*cnt;
		h/=2;
	}
	if(cnt >= n)
		cout<<"Yes\n";
	else
		cout<<"No\n";
}
return 0;
}

