#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here


int main()
{
ll t;
cin>>t;
ll c=1;
while(c<=t)
{
	string s;
	cin>>s;
	string ans;
	for(int j=0;j<(s[0]-'0');j++)
	{
			ans.pb('(');
	}
	ans.pb(s[0]);
	for(int i=1;i<s.length();i++)
	{
		if((s[i]-'0')>(s[i-1]-'0'))
		{
			for(int j=0;j<(s[i]-s[i-1]);j++)
			{
				ans.pb('(');
			}
		}
		else if((s[i]-'0')<(s[i-1]-'0'))
		{
			for(int j=0;j<(s[i-1]-s[i]);j++)
			{
				ans.pb(')');
			}
		}
		ans.pb(s[i]);
	}
	for(int i=0;i<(s[s.length()-1]-'0');i++)
	{
		ans.pb(')');
	}
	cout<<"Case #"<<c<<": "<<ans<<"\n";
	c++;
}
return 0;
}

