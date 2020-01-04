#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

void filter(string s, int n)
{
	int i=0;
	while(n>0)
	{
		if((n&1)==1)
		cout<<s[i];
		i++;
		n =n>>1;
	}
	cout<<"\n";
	return;
}

int main()
{
//ll t;
//cin>>t;
//while(t--)
//{

//}
string s;
cin>>s;
ll n = s.length();
for(ll i=0;i<(1<<n);i++)
{
	filter(s,i);
}
return 0;
}

