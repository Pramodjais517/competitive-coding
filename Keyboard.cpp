#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

int main()
{
char c;cin>>c;
string s;
cin>>s;
string p="qwertyuiopasdfghjkl;zxcvbnm,./";
fi(i,0,s.length(),1)
{
	if(c=='L')
	{
		fi(j,0,p.length(),1){
			if(s[i]==p[j]){
			s[i]=p[j+1];break;}
		}
	}else
	{
		fi(j,0,p.length(),1){
			if(s[i]==p[j]){
			s[i]=p[j-1];break;}
		}
	}
}
cout<<s;
return 0;
}


