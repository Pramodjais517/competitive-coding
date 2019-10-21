#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
string s;
cin>>s;
ll aston=0,danik=0;
for(int i=0;i<n;i++)
{
	if(s[i]=='A')
	aston++;
	else if(s[i]=='D')
	danik++;
}
if(aston>danik)
cout<<"Anton";
else if(danik>aston)
cout<<"Danik";
else
cout<<"Friendship";
return 0;
}
