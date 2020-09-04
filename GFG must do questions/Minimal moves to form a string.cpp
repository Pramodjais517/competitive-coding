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
bool check(string s,ll l,ll r)
{
	ll mid = l + (r-l)/2 + 1;
	ll lim = mid;
	while(l < lim)
	{
		if(s[l]!=s[mid])
		{
			return false;
		}
		else
		{
		l++;
		mid++;	
		}
	}
	return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	ll l = 0,r = s.length()-1;
	ll ans = 0;
	while(l<=r and l<s.length() and r>=0)
	{
		if((r-l + 1) & 1)
		{
			r--;
		}
		else if(!check(s,l,r))
		{
			r--;
		}
		else
		{
			l += (r-l)/2 + 1;
		}
		ans++;
	}
	cout<<ans<<"\n";
}
return 0;
}


