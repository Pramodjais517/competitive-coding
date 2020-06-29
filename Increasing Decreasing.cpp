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
while(t--)
{
	ll n;
	cin>>n;
	ll a[n],mx = 0;
	map<ll,ll> m;
	fi(i,0,n,1)
	{
	cin>>a[i];
	m[a[i]]++;	
	mx = max(mx, a[i]);	
	}
	if(m[mx]>1)
	{
		cout<<"NO\n";
		continue;
	}
	bool f = 0;
	for(auto i:m)
	{
		if(i.second > 2)
		{
			f = 1;
			 break;
		}
	}
	if(f)
	{
		cout<<"NO\n";
		continue;
	}
	else
	{
	cout<<"YES\n";
	for(auto i:m)
	{
		cout<<i.first<<" ";
		m[i.first] = i.second -1;
	}
	for(auto i = m.rbegin(); i != m.rend(); i++) {
	 if(i->second == 1)
	 {
	 	cout<<i->first<<" ";
	 }
    }
    cout<<"\n";
	}
}
return 0;
}

