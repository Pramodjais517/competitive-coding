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
ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];
string s = "";
for(int i=0;i<n;i++)
{
	s+=to_string(a[i]);
}
bool f = 0;
string pat = "";
for(int i=0;i<=n/2;i++)
{
	pat+=s[i];
	if(n%(i+1) == 0)
	{
		int j;
		f = 0;
		for(j = i+1;j<(n-i);j+=(i+1))
		{
			if(s.substr(j,i + 1) != pat)
			{
				break;
			}
		}
		if(j >= (n-i))
		{
		 f = 1;
		 break;	
		}	
	}
}
if(f)
cout<<1<<"\n";
else
cout<<0<<"\n";
return 0;
}


