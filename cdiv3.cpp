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
while(t--)
{
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	ll o=0,e=0;
	fi(i,0,n,1)
	{
		if(a[i]&1)
		o++;
		else
		e++;
	}
	if(o%2==0 and e%2==0)
	cout<<"YES\n";
	else if(o%2!=0 and e%2!=0)
	{
		sort(a,a+n);
		bool f=0;
		fi(i,1,n,1)
		{
			if(a[i]-a[i-1] == 1)
			{
				f++;
				break;
			}
		}
		if(f)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	else
	cout<<"NO\n";
}
return 0;
}

