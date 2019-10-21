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
int n;
cin>>n;
string s;
cin>>s;
int count=0;
f(i,1,s.length(),1)
{
	if(s[i]==s[i-1])
	count++;
}
cout<<count;
return 0;
}


