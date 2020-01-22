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
//ll t;
//cin>>t;
//while(t--)
//{

//}
ll l,r;
cin>>l>>r;
ll m = INT_MIN;
fie(i,l,r,1)
{
	fie(j,i,r,1)
	{
		m = max(m,i^j);
	}
}
cout<<m<<'\n';
return 0;
}

