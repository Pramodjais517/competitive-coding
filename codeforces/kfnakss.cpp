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
ll ar[10001];
ll getans(ll pos,ll sum, ll n, bool flag)
{
	if(pos>n)
	return sum;
	ll ans = 0;
	ll lim = 9;
	if(!flag)
	lim = ar[pos];
	for(int i=0;i<=lim;i++)
	{
		if(flag or i < lim)
		ans += getans(pos+1, sum+i, n, true);
		else
		ans += getans(pos+1, sum+i, n, false);
	}
	return ans;
}
ll dp[11][100][2];
ll getans(string a){
	ll ans = 0;
	fi(i,0,a.length(),1){
		ans+= a[i] - '0';
	}
	return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
while(1)
{
string a,b;
cin>>a>>b;
if(a!= "-1" and b!="-1"){
ll ans = 0;
memset(dp,-1,sizeof(dp));
fi(i,0,a.length(),1)
ar[i+1] = a[i] - '0'; 
memset(dp,-1,sizeof(dp));
fi(i,0,b.length(),1)
ar[i+1] = b[i] - '0';
ans = getans(1,0,b.length(),false) - getans(1,0,a.length(),false) + getans(a);
cout<<ans<<"\n";	
}	
else
return 0 ;
}
return 0;
}

