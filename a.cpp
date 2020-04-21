#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpi vector<pi>
#define vpl vector<pl>
#define umi unordered_map<int,int>
#define uml unordered_map<ll,ll>
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define inf 1000000000000000
#define md 998244353
#define endl "\n"

ll prime[1000000];

void sieve()
{
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<1000000;i++)
		prime[i]=1;

	for(int i=2;i*i<1000000;i++)
		if(prime[i]==1)
			for(int j=i*i;j<1000000;j+=i)
				prime[j]=0;
}

bool isPrime(ll n) 
{ 
    if (n <= 1) 
        return false; 
    for (ll i = 2; i <= floor(sqrt(n)); i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}

ll gcd(ll a, ll b)
{ 
	return !b ? a : gcd(b, a % b); 
}
ll lcm(ll a, ll b)
{ 
	return (a / gcd(a, b)) * b; 
}
ll fastExponentiation(ll n, ll x, ll modulo) 
{
	ll res = 1;
	while(x > 0) 
       {
          if(x & 1)
          res = (res*n) % modulo; 
          x = x >> 1;
          n = (n * n) % modulo;
       }
       return res; 
}


ll power(ll n , ll p ){
	if(p==0)
	   return 1;
 
	 ll res = power((n*n)%mod,p/2);
	 if(p%2==1)
	   res = (n*res)%mod;
 
	   	 return res;
}

bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
}   

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}
void input_array(int a[],int n)
{
	for(int i=0;i<n;i++)
	cin>>a[i];
}


void solve()
{
	
	int n;
	cin>>n;

	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll cur=a[0],sum=a[0],pos=0,neg=0;
	if(cur>=0)
	{
		pos=1;
	}
	else 
	{
		neg=1;
	}

	for(int i=0;i<n;i++)
	{
		if(a[i]>0 && pos==1)
		{
			sum-=cur;
			cur=max(cur,a[i]);
			sum+=cur;
		}
		else if( a[i]<0 && pos==1)
		{
			sum+=a[i];
			cur=a[i];
			neg=1;
			pos=0;
		}
		else if(a[i]<0 && neg==1)
		{
			sum-=cur;
			cur=max(cur,a[i]);
			sum+=cur;
		}
		else if(a[i]>0 && neg==1)
		{
			sum+=a[i];
			cur=a[i];
			pos=1;
			neg=0;
		}

		// cout<<i<<" "<<a[i]<<" "<<cur<<" "<<sum<<endl;
	}
	cout<<sum<<endl;
	
}

int main()
{
	int t; cin>>t; while(t--)
	solve();
	
	return 0;
}
