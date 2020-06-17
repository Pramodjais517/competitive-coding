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
	string s;
	cin>>s;
	if(n==1)
	{
		cout<<1<<"\n";
		continue;
	}
	if(k>=n)
	{
		cout<<1<<"\n";
		continue;
	}
	ll in = -1,ans=0,i=0;
	while(i<n)
	{
		if(s[i]=='1')
		{
			if(in!= -1)
			{
				ans+=(i-in-1)/ (2*k + 1);
			}
			else{
				ans+= i/(2*k + 1);
			}
			in = i;
		}
		i++;	
	}
	if(in == -1)
	{
		ans++,in=0;
	}	
	ans+=(n-in-1)/(2*k+1);
	cout<<ans<<"\n";
}
return 0;
}

