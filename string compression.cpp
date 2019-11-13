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
string compress(string s){
	string d;
	int i=0;ll count=0;
	while(i<s.length()){
		if(s[i]!=s[i+1])
		{
			if(count>1)
		d+=s[i]+to_string(count+1);
		else
		d+=s[i]; 
		count=0;
		}
		else{
			count++;
		}
		i++;	
}
return d;
}
int main()
{
string s;cin>>s;
s=compress(s);cout<<s;
return 0;
}


