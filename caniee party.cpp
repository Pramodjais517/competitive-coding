#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007


int main()
{
	int t;
	cin>>t; while(t--){
		string s;
		cin>>s;
		int cnt = 0;
		int n = s.length();
		for(int i=0;i<n;i++)
		{
			if(s[i] == '#')
			continue;
			if(i+1 < n and s[i] == s[i+1])
			{
				s[i+1] = '#';
				cnt++;
			}
			if(i+2 < n and s[i] == s[i+2])
			{
				s[i+2] = '#';
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
return 0;
}

