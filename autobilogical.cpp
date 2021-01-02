#include<bits/stdc++.h>
using namespace std;
#define ll long long


int FindAutoCount(string n)
{
	string s = n;
	map<int,int> mp;
	for(int i=0;i<s.size();i++)
	{
		mp[s[i] - '0']++;
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='0' and mp[i]!=(s[i]-'0'))
		return 0;
	}
	return mp.size();
}

int main()
{
string s;
cin>>s;
cout<<FindAutoCount(s);
return 0;
}


