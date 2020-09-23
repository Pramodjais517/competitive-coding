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
	vector<string> s;
	string str;
	cin>>str;
	string x = "";
	fi(i,0,str.length(),1)
	{
		if(str[i] == '.')
		s.pb(x),x = "";
		else
		x.pb(str[i]);
	}
	s.pb(x),x = "";
	fi(i,0,s.size(),1)
	{
		if(i==s.size()-1)
		cout<<s[s.size() - i -1]<<"\n";
		else
		cout<<s[s.size() - i - 1]<<".";
	}
}
return 0;
}


