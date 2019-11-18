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
bool length(string s1,string s2){
	fi(i,0,min(s1.length(),s2.length()),1)
	{
		if(s1[i]!=s2[i])
		return s1<s2;
	}
	return s1.length()>=s2.length();
}

int main()
{
	ll n;
	cin>>n;
	vector <string>s(n);
	string a;
	fi(i,0,n,1)
	{
		cin>>s[i];
	}
	sort(s.begin(),s.end(),length);
	itr(i,s)
	cout<<*i<<'\n';
	return 0;
}


