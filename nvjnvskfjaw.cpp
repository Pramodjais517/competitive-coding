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
	if(n==1)
	{
		cout<<n<<"\n";
		continue;
	}
	ll a[n];
	ll mex = 0;
	fi(i,0,n,1)
	{
	cin>>a[i];
	mex = max(mex,a[i]);
	}
	ll cnt = 0;
	while(mex>0)
	{
		mex = mex>>1;
		cnt++;
	}
	ll dp[cnt];
	memset(dp,0,sizeof(dp));
	fi(i,0,n,1)
	{
		ll j = 0;
		while(a[i]>0 and j<cnt)
		{
			dp[j++] += a[i]&1;
			a[i] = a[i]>>1;	
		}
	}
	vector<pair<ll,ll>> p;
	for(int i=0;i<cnt;i++)
	{
		ll c = dp[i]*(pow(2,i));
		p.pb({c,i});
	}
	sort(p.rbegin(),p.rend());
	ll ans = INT_MAX,z = p.size();
	ll mx = 0;
	for(auto i= 0;i<z-k;i++)
	{
		ll num =0,sum=0;
		for(int j = i;j<(i+k);j++)	
		{
			sum +=p[j].first;
			num += (1<<p[j].second);
		}
		if(sum>=mx){
			mx = sum;
			ans = min(ans,num);
		}
	}
	cout<<ans<<"\n";
}
return 0;
}

