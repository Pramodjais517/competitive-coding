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
	char a[2*n+1][2*n+1];
	for(int i=0;i<=2*n;i++)
	{
		ll temp;
		if(i<=n)
		temp = i;
		else
		temp = 2*n-i;
		ll j= n;
		while(temp>=0 and j>=0)
		{
			a[i][j] = temp + '0';
			a[i][2*n - j] = temp + '0';
			temp--;
			j--;
		}
		if(j>=0)
		{
			while(j>=0)
			{
				a[i][j] = 32;
				a[i][2*n - j] = 32;
				j--;
			}
		}
	}
	fi(i,0,2*n+1,1)
	{
		fi(j,0,2*n+1,1)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
	}

