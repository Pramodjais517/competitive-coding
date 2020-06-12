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
ll N = 100000;
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

int main()
{
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
sieve();
ll t;
cin>>t;
while(t--)
{
	ll l, r;
	cin>>l>>r;
	if(l==1)
	l++;
	vector<ll> pr;
	for(ll i=2;i*i<=r;i++)
	{
		if(prime[i])
		pr.pb(i);
	}
	vector<ll> seg(r-l+1,1);
	for(ll i=0;i<pr.size();i++)
	{
		ll j =  (l/pr[i]) * pr[i];
		if(j<l)
		j+=pr[i]; 
		for(;j<=r;j+=pr[i])
		{
			if(j!=pr[i])
			seg[j-l] = 0;
		}
	}
	fi(i,0,seg.size(),1)
	{
		if(seg[i])
		cout<<l+i<<" ";
	}
	cout<<"\n";
}
return 0;
}

