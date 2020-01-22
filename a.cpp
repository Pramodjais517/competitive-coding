#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(ll i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
string s;
cin>>s;
ll m=INT_MIN;
fi(i,0,s.length(),1)
{
	ll count=0;
	if(s[i]=='A')
	{
		i=i+1;
		while(s[i]=='P' and i<s.length())
		{ 
			i++;
			count++;
		}
			i-=1;
	}
    m=max(count,m);
}
cout<<m<<"\n";
}
return 0;
}

