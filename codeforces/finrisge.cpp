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
bool factor(ll n)
{
	ll c2=0,co=0;
	while(n%2 == 0)
	{
		c2++;
		n/=2;
	}
	for(ll i=3;i<=sqrt(n);i+=2)
	{
		while(n%i == 0)
		{
			 co++;
			 n/=i;
		}
	}
	if(n>2)
	co++;
	if(c2==1 and co==1)
	return false;
	else
	return true;
}
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
	if(n==1)
	{
		cout<<"FastestFinger\n";
	}
	else if(n&1 or n==2)
	{
		cout<<"Ashishgup\n";
	}
	else if((n&(n-1))==0)
	{
		cout<<"FastestFinger\n";
	}
	else
	{
		bool b = factor(n);
		if(b)
		cout<<"Ashishgup\n";
		else
		cout<<"FastestFinger\n";
	}
}
return 0;
}

