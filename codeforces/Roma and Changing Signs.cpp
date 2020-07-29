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

//void dfs(ll v)
//{
//	vis[v] = 1;
//	 cout<<v<<" -> " ;
//	for(ll i=0;i<ar[v].size();i++)
//	{
//		ll child = ar[v][i];
//		if(vis[child] == 0)
//		{
//			dfs(child);
//		}
//	}
//}

// template ends here


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
ll a[n],neg = 0;
fi(i,0,n,1)
{
	cin>>a[i];
	if(a[i] < 0 )
	neg++;	
}
if(k>n)
{
	k = k%n;
}
if(neg >= k)
{
	ll i=0;
	while(a[i]<0)
	{
		i++;
	}
	i--;
	while(a[i]<0 and i>=0 and k>0)
	{
		k--;
		a[i] = -1*a[i];
		i--;
	}
}
else
{
	fi(i,0,k,1)
	a[i] = -1*a[i];
}
ll ans=0;
fi(i,0,n,1)
{
	ans+=a[i];
}
cout<<ans<<"\n";
return 0;
}

