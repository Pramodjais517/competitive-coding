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

bool sortINC(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.first > b.first); 
}  
  
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll> p, ch;ll a,b;ll sum=0,cnt = 1;
fi(i,0,n,1)
{
cin>>a>>b;
if (b != 0)
{
	sum += a;
	cnt += b-1;
}
else
p.pb(a);	
}
sort(p.begin(),p.end(),greater<ll>());
for(ll i = 0;i<min((ll)p.size(),cnt);i++)
{
	sum+=p[i];
}
cout<<sum<<'\n';	
return 0;
}

