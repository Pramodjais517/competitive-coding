#include<bits/stdc++.h>
using namespace std;
// template starts here
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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;cin>>t; while(t--){ 
	string s;
	cin>>s;
	int n = s.length();
	int cnt = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]!='#')
		{
			if(i+1 < n and s[i] == s[i+1])
			{
				cnt++;
				s[i+1] = '#';
			}
			if(i+2 < n and s[i] == s[i+2])
			{
				cnt++;
				s[i+2] = '#';
			}
		}
	}
	cout<<cnt<<"\n";
}
return 0;
}

