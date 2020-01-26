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

string reverse(string s)
{
	ll i = s.length()-1;
	string str;
	while(s[i]=='0')
	{
		i--; 
	}
	for(ll j=i;j>=0;j--)
	{
		str+=s[j];
	}
	return str;
}

string string_sum(string a, string b)
{
	ll i=a.length()-1;
	ll j=b.length()-1;
	ll n = max(i+1,j+1);
	string str="";
	int carry=0;
	while(i>=0 and j>=0)
	{
		ll n = (a[i]-'0')+(b[j]-'0')+carry;
		str =  (char)('0' +  (n)%10)+str;
		if(n>=10)
		carry = 1;
		else 
		carry=0;
		i--;
		j--;
	}
	if(i>=0)
	{
		while(i>=0)
		{
			ll n = (a[i]-'0')+carry;
			str =  (char)('0' + n%10)+str;
			if(n>=10)
			carry=1;
			else 
			carry=0;
			i--;
		}
		
	}
	if(j>=0)
	{
		while(j>=0)
		{
			ll n = (b[j]-'0')+carry;
			str=  (char)('0' +  (n)%10)+str;
			if(n>=10)
			carry=1;
			else 
			carry=0;
			j--;
		}
		
	}
	if(carry)
	str = (char)('0' + carry)+str;
	return str;
}
int main()
{
ll t;
cin>>t;
while(t--)
{
	string a,b;
	cin>>a>>b;
	a = reverse(a);
	b = reverse(b);
    string sum  = reverse(string_sum(a,b));
	cout<<sum<<"\n";
}
return 0;
}

