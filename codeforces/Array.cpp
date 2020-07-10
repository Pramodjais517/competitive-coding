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
	vector<ll> s1,s2,s3; ll a;
	fi(i,0,n,1)
	{
		cin>>a ;
		if(a<0)
		s1.pb(a);
		else if(a == 0)
		s3.pb(a);
		else
		s2.pb(a);
	}
	if(s1.size()%2 == 0 and s2.size()!=0)
	{
		s3.push_back(s1[s1.size()-1]);
		s1.pop_back();
	}
	else if(s2.size()==0)
	{
		s2.push_back(s1[s1.size()-1]);
		s1.pop_back();
		s2.pb(s1[s1.size() - 1]);
		s1.pop_back();
	}
	if(s1.size()%2 == 0 and s1.size()!=0)
	{
		s3.pb(s1[s1.size() - 1]);
		s1.pop_back();
	}
	cout<<s1.size()<<" ";
	fi(i,0,s1.size(),1)
	cout<<s1[i]<<" ";
	cout<<"\n";
	cout<<s2.size()<<" ";
	fi(i,0,s2.size(),1)
	cout<<s2[i]<<" ";
	cout<<"\n";
	cout<<s3.size()<<" ";
	fi(i,0,s3.size(),1)
	cout<<s3[i]<<" ";
	cout<<"\n";
return 0;
}

