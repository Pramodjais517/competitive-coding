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
ll N = 1000000;
vector<bool> prime(N+1,true);

void sieve()
{
	prime[0] = false,prime[1] = false;
	for(ll i=2;i*i <= N;i++)
	{
		if(prime[i])
		{
			for(ll j = i*i; j<= N ;j+=i)
			prime[j] = false;
		}
	}
}

ll pow(ll a, ll b)
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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
ll a[m+1][n+1];
fie(i,1,m,1)
{
	fie(j,1,n,1)
	cin>>a[i][j];
}
map<ll,ll> mp;
ll in = -1,max = LONG_MIN;
fie(i,1,m,1)
{
	max = LONG_MIN;
	fie(j,1,n,1)
	{
		if(a[i][j] > max)
		{
			in = j;
			max = a[i][j];
		}
	}
	mp[in]++;
}
max = LONG_MIN;
ll win = 1;
for(auto i:mp)
{
	if(i.second > max)
	win = i.first,max = i.second;
}
cout<<win<<"\n";
return 0;
}

