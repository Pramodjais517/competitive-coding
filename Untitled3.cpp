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
string removefromstart(string s){
	ll i=0;
	string s1="";
	while((s[i]=='W') and (s[i+1]=='U') and (s[i+2]=='B'))
	{
		i+=3;
	}
	fi(j,i,s.length(),1){
		s1+=s[j];
	}
	return s1;
}
string removefromend(string s){
	ll i=s.length()-1;
	string s1="";
	while((s[i-2]=='W') and (s[i-1]=='U') and (s[i]=='B'))
	{
		i-=3;
	}
	fie(j,0,i,1){
		s1+=s[j];
	}
	return s1;
}
string removefrommid(string s){
	ll i=0;
	string s1="";
	fi(i,0,s.length(),1){
	if((s[i]=='W') and (s[i+1]=='U') and (s[i+2]=='B'))
	{
		s1+=" ";
		i+=2;
	}else {
		s1+=s[i];
	}
}
	return s1;
}
int main()
{
	string s;cin>>s;
	s=removefromstart(s);
	s=removefromend(s);
	s=removefrommid(s);
	cout<<s;
return 0;
}


