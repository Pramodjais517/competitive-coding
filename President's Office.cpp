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


int main()
{
//ll t;
//cin>>t;
//while(t--)
//{
//}
ll n,m;char ch;
cin>>n>>m>>ch;
char a[n][m];
fi(i,0,n,1)
{
	fi(j,0,m,1)
	cin>>a[i][j];
}
set<char> s;
s.insert(ch);
ll c = 0;
fi(i,0,n,1)
{
	fi(j,0,m,1)
	{
		if(a[i][j]==ch)
		{
			if((i-1)>=0)
			{
				if(a[i-1][j]!='.' and s.find(a[i-1][j])==s.end())
				{
					s.insert(a[i-1][j]);
					c++;
				}
			}
			if((j-1)>=0)
			{
				if(a[i][j-1]!='.' and s.find(a[i][j-1])==s.end())
				{
					s.insert(a[i][j-1]);
					c++;
				}
			}
			if((i+1)<n)
			{
					if(a[i+1][j]!='.' and s.find(a[i+1][j])==s.end())
				{
					s.insert(a[i+1][j]);
					c++;
				}
			}
			if((j+1)<m)
			{
					if(a[i][j+1]!='.' and s.find(a[i][j+1])==s.end())
				{
					s.insert(a[i][j+1]);
					c++;
				}
			}
		}
	}
}
cout<<c;
return 0;
}

