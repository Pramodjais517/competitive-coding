#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
getline(cin,s);
map<char,int> mp;
bool f = 0;
set<char> vow = {'a','A','e','E','i','I','o','O','u','U'};
int sp = 0;
for(int i=0;i<s.size();i++)
{
	if(vow.find(s[i])!=vow.end())
	mp[(char)tolower(s[i])]++;
	if(s[i]==' ')
	sp++;
	else if((s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= 'a' and s[i]<= 'z'))
	continue;
	else
	{
		f = 1;
		break;
	}
}
if(f)
cout<<0;
else
{
	if(sp==s.length())
	{
		cout<<"INVALID INPUT";
	}
	else
	{
	cout<<"a:"<<mp['a']<<"\n";
	cout<<"e:"<<mp['e']<<"\n";
	cout<<"i:"<<mp['i']<<"\n";
	cout<<"o:"<<mp['o']<<"\n";
	cout<<"u:"<<mp['u']<<"\n";
	for(int i=0;i<s.length();i++)
	{
		if(vow.find(s[i]) == vow.end())
		cout<<s[i];
	}
	}
}

return 0;
}


