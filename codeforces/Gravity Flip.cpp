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
char s1[100];char s2[100];
cin>>s1>>s2;
int i=0;
while(s1[i]!='\0')
{
	if(int(s1[i])<97)
	s1[i]+=32;
	i++;
}
i=0;
while(s2[i]!='\0')
{
	if(int(s2[i])<97)
	s2[i]+=32;
	i++;
}
int r = strcmp(s1,s2);
if(r==0)
cout<<0;
else if(r<0)
cout<<-1;
else
cout<<1;
return 0;
}


