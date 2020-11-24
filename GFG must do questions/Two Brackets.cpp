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
	string s;
	cin>>s;
	if(s.length()==0)
	{
		cout<<0<<"\n";
		continue;
	}
	bool sq = 0,sm = 0;int ans =0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == '(')
		sm=1;
		if(s[i] == ')')
		{
			if(sm)
			{
				ans++;
				sm=0;
			}
		}
		if(s[i]=='[')
		sq=1;
		if(s[i]==']')
		{
			if(sq)
			{
				ans++;
				sq =0 ;
			}
		}
	}
	cout<<ans<<"\n";
}
return 0;
}


