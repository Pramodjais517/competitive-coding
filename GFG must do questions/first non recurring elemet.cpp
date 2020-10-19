#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	char a[n];
	fi(i,0,n,1)
	cin>>a[i];
	list<char> l;
	for(int i=0;i<n;i++)
	{
		bool f = 0;
		if(!l.empty())
		{
			for(auto j = l.begin();j!=l.end();j++)
			{
				if(*j == a[i])
				{
					f = 1;
					l.remove(a[i]);
					break;
				}
			}
		}
		if(!f)
		l.push_back(a[i]);
		if(l.empty())
		{
			cout<<-1<<" ";
		}
		else
		{
			cout<<l.front()<<" ";
		}
	}
	cout<<"\n";
}
return 0;
}


