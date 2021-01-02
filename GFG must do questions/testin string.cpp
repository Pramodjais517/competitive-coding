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
string s;
cin>>s;
int end = 0,start = 0;
string temp = "";
for(int i=0;i<s.length();i++)
{
	if(s[i]!='x')
	temp.push_back(s[i]);
	if(end==0 and temp == "programmer")
	{
		end = i;
	}
	if(end>0 and s[i]=='p')
	{
		start = i;
		break;
	}
}
cout<<start - end - 1<<"\n";
return 0;
}


