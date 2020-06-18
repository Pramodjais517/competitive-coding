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
ll n;
cin>>n;
ll a[n];
fi(i,0,n,1)
cin>>a[i];
ll f =0;
fi(i,1,n,1)
{
	f = a[i] - a[i-1];
}
if(f==0)
{
	if(a[n-1]==15)
	cout<<"DOWN\n";
	else if(a[n-1]==0)
	cout<<"UP";
	else
	cout<<"-1";
}
else if(f>0)
{
	if(a[n-1]!=15)
	cout<<"UP";
	else
	cout<<"DOWN";
}
else if(f<0)
{
	if(a[n-1]!=0)
	cout<<"DOWN";
	else
	cout<<"UP";
}
return 0;
}

