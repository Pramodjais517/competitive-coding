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
ll t;
cin>>t;
for(int j=1;j<=t;j++)
{
	ll x,y;
	string s;
	cin>>x>>y>>s;
	ll ans = -1;
	fi(i,0,s.length(),1)
	{
		if(s[i] == 'E')
		x+=1;
		else if(s[i]=='W')
		x-=1;
		else if(s[i]=='N')
		y+=1;
		else
		y-=1;
		if((abs(x)+abs(y)) <= i+1)
		{
			ans = i+1;
			break;
		}
	}
	if(ans == -1 )
	{
		cout<<"Case #"<<j<<": IMPOSSIBLE\n";
	}
	else
	cout<<"Case #"<<j<<": "<<ans<<"\n";
}
	return 0;
}

