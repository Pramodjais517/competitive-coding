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
int a,b,c,d;
cin>>a>>b>>c>>d;
string s;
cin>>s;
ll w=0;
f(i,0,s.length(),1)
{
	if(s[i]=='1')
	w+=a;
	else if(s[i]=='2')
	w+=b;
	else if(s[i]=='3')
	w+=c;
	else
	w+=d;
}
cout<<w;
return 0;
}


