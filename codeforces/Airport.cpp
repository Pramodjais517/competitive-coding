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
ll n,m;
cin>>n>>m;
ll a[m];
fi(i,0,m,1)
cin>>a[i];
sort(a,a+m);
ll i=0, ans1=0;
ll temp = n;
while(n and i<m)
{
	ll f = a[i];
	while(f and n)
	{
		ans1+=f;
		f--;
		n--;
	}	
	i++;
}
ll ans2=0;

while(temp)
{
	if(a[i%m]!=0)
	{
	ans2+=(a[i%m]);
	temp--;	
	a[i%m]--;
	}	
		i++;
}
cout<<ans2<<" "<<ans1<<"\n";
return 0;
}

