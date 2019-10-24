#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
string s,r;
cin>>s>>r;
int pos=0;
f(i,0,r.length(),1)
{
	if(r[i]==s[pos])
	pos++;
}
cout<<pos+1;
return 0;
}


