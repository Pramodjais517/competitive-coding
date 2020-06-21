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
	ll a[2*n];
	fi(i,0,2*n,1)
	cin>>a[i];
	vector<ll> odd,even;
	fi(i,0,2*n,1)
	{
		if(a[i]%2!=0)
		odd.pb(i+1);
		else
		even.pb(i+1);
	}
	if(odd.size()%2!=0 or even.size()%2!=0)
	{
		fi(i,0,odd.size()-2,2)
		cout<<odd[i]<<" "<<odd[i+1]<<"\n";	
		if(even.size()>=2)
		{
		fi(i,0,even.size()-2,2)
		cout<<even[i]<<" "<<even[i+1]<<"\n";	
		}	
	}
	else
	{
		fi(i,0,odd.size()-2,1)
		cout<<odd[i]<<" "<<odd[i+1]<<"\n";
		fi(i,0,even.size()-1,1)
		cout<<even[i]<<" "<<even[i+1]<<"\n";
	}
}
return 0;
}

