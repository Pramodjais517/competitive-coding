#include<bits/stdc++.h>
using namespace std;
// template starts here
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
ll t;
cin>>t;
map<char,ll> m;
m['a'] = 0;
m['e'] = 1;
m['i'] = 2;
m['o'] = 3;
m['u'] = 4;
while(t--)
{
	ll n;
	cin>>n;
	string s;
	ll mp[32];
	memset(mp,0,sizeof(mp));
	fi(i,0,n,1)
	{
		cin>>s;
		ll num=0;
		for(auto i:s)
		{
			num = num|1<<m[i];
		}
		mp[num]++;
	}
	ll ans = 0;
	for(ll i= 1;i<32;i++)
	{
		for(ll j=i+1;j<32;j++)
		{
			if((i | j) == 31)
			{
				ans += (mp[i]*mp[j]);
			}
		}
	}
	ans += (mp[31] * (mp[31]-1))/2;
	cout<<ans<<"\n";
}

return 0;
}

