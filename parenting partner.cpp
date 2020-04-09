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
bool cameron(vector<pair<ll,ll>> &cm,ll s)
{
	for(int i=0;i<cm.size();i++)
	{
		if(s<cm[i].second)
		return false;
	}
	return true;
}
bool jamie(vector<pair<ll,ll>> &jm,ll s)
{
	for(int i=0;i<jm.size();i++)
	{
		if(s<jm[i].second)
		return false;
	}
	return true;
}
int main()
{
ll t;
cin>>t;
ll c=1;
while(c<=t)
{
	ll n;
	cin>>n;
	vector<pair<pair<ll,ll>,ll>> m;
	ll s,e;
	char ans[n];
	for(int i=0;i<n;i++)
	{
		cin>>s>>e;
		m.pb(mp(mp(s,e),i));
	}
	sort(m.begin(),m.end());
	vector<pair<ll,ll>> cm,jm;
	bool flag=0;
	for(int i=0;i<m.size();i++)
	{
		if(cameron(cm,m[i].first.first))
		{
			ans[m[i].second] = 'C';
			cm.pb(mp(m[i].first.first,m[i].first.second));
		}
		else if(jamie(jm,m[i].first.first))
		{
			ans[m[i].second] = 'J';
			jm.pb(mp(m[i].first.first,m[i].first.second));
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag)
	cout<<"Case #"<<c<<": "<<"IMPOSSIBLE\n";
	else
	{
		cout<<"Case #"<<c<<": ";
		for(int i=0;i<n;i++)
		cout<<ans[i];
		cout<<"\n";
	}
	
	c++;
	
}
return 0;
}

