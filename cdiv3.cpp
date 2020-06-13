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
	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	fi(i,0,n,1)
	fi(j,0,m,1)
	cin>>a[i][j];
	vector<pair<ll,ll>> sol;
	for(ll l=1;l<=(n+m-1);l++)
	{
		ll s_col = max(0ll,(l-n));
		ll cnt = min(min(l,(m-s_col)),n);
		ll o=0,z=0;
		fi(j,0,cnt,1)
		{
			if(a[min(n,l)-j-1][s_col+j] == 1)
			o++;
			else
			z++;
		}
		sol.pb({z,o});
	}
	ll l = 0,r = sol.size()-1;
	ll ans =0 ;
	while(l<r)
	{
		ll x = (sol[l].first + sol[r].first);
		ll y = (sol[l].second+sol[r].second);
		ans+= min (x,y);l++,r--;
	}
	cout<<ans<<"\n";
}
return 0;
}

