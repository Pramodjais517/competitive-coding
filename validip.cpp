#include<bits/stdc++.h>
using namespace std;
// template starts here
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
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here
int number(string s,int i,int j)
{
	int n=0;
	for(int k=i;k<j;k++)
	{
		n  = n*10 + (s[k]-'0') ;
	}
	return n;
}
bool is_valid(string s)
{
	int i=0;
	while(i<s.length())
	{
		int j=i;
		while(j<s.length() and s[j]!='.')
		{
			j++;
		}
		if((j-i)>3 or (j-i)==0)
		return false;
		int n = number(s,i,j);
		if(n<0 or n>255)
		return false;
		if(j-i>1 && (n==0 || s[i]=='0'))
        {
            return false;
        }
		i = j+1;
	}
	return true;
}
string findstring(string s,int i, int j,int k)
{
	string st="";
	for(int l = 0;l<s.length();l++)
	{
		st = st+s[l];
		if(l == i or l==j or l==k)
		{
			st =st+'.';
		}
	}
	return st;
}
int main()
{
string s;cin>>s;
int  n= s.length();
vector<string> ans;
for(int i=0;i<n-1;i++)
{
	for(int j=i+1;j<n-1;j++)
	{
		for(int k=j+1;k<n-1;k++)
		{
			string z = findstring(s,i,j,k);
			if(is_valid(z))
			{
				ans.pb(z);
			}
		}
	}
}
show(ans);
return 0;
}

