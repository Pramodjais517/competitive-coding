#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll signed long long
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
    if (b == 0)
        return 1;
    else
        return a * exp(a, b - 1);
}
// template ends here


int main()
{
ll t;
cin>>t;
ll extra=0;
while(t--)
{
	ll s,n,k,r;
	cin>>s>>n>>k>>r;
	ll req=0,i=k;
	while(n--)
	{
		req+=i;
		i*=r;
	}
	if(req<=s)
	{
		extra+= (s-req);
		cout<<"POSSIBLE "<<(s-req)<<"\n";
	}
	else
	{
		extra-=abs(req - s);
		cout<<"IMPOSSIBLE "<<abs(req - s)<<"\n";	
	}
}
if(extra>=0)
cout<<"POSSIBLE\n";
else
cout<<"IMPOSSIBLE\n";

return 0;
}

