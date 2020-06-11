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
	string s;
	cin>>s;
	ll n =s.length();
	if(s[0]=='1' or s[s.length()-1]=='1')
	{
		ll cnt=1;
		if(s[0]=='1')
		fi(i,1,n,1)
		{
			if(s[i]=='1')
			cnt++;
		}
		else if(s[n-1]=='1')
		fi(i,0,n-1,1)
		{
			if(s[i]=='1')
			cnt++;
		}
		if(cnt == n)
		cout<<"0\n";
		else
		{
			ll z = n-cnt;
			cout<<min(cnt-1,z)<<"\n";
		}
	}
	else{
		ll cnt=0;
		fi(i,1,n,1)
		{
			if(s[i]=='1')
			cnt++;
		}
		ll z = n-cnt;
		cout<<min(z,cnt)<<"\n";
	}
}
return 0;
}

