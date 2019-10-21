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
string s;
cin>>s;
ll u=0,l=0;
f(i,0,s.length(),1)
{
	if(s[i]>='A' && s[i]<='Z')
	u++;
	else
	l++;
}
if(u>l){
	f(i,0,s.length(),1)
	{
		if(s[i]>=97)
		s[i]-=32;
	}
}
else if(l>u or l==u){
	f(i,0,s.length(),1)
	{
		if(s[i]<97)
		s[i]+=32;
	}
}
cout<<s;
return 0;
}


