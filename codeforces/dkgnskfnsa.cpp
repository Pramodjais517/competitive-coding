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
	ll n,k;
	cin>>n>>k;
	ll a[n];
	ll b[k],sum=0;
	fi(i,0,n,1)
	{
	cin>>a[i];	
	}
	fi(i,0,k,1)
	cin>>b[i];
	sort(a,a+n,greater<ll>());
	sort(b,b+k);
	ll j=0,i=0;
	while(b[i]==1)
	{
		sum+= (2*a[j]);
		j++;
		i++;
	}
	ll s = j,e = n-1;
	while(s<=e and i<k and b[i]!=1)
	{
		sum+= (a[s] + a[e]);
		s++;
		e -= (b[i] - 1);
		i++;
	}
	cout<<sum<<"\n";
	
}
return 0;
}

