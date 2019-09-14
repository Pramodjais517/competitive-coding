#include<bits/stdc++.h>
using namespace std;
#define ll long long
//const int N = 1000001; 
#define mod  1000000007
//ll factorialNumInverse[N + 1]; 
//  
//// array to precompute inverse of 1! to N! 
//ll naturalNumInverse[N + 1]; 
//  
//// array to store factorial of first N numbers 
//ll fact[N + 1]; 
//  
//// Function to precompute inverse of numbers 
//void InverseofNumber(ll p) 
//{ 
//    naturalNumInverse[0] = naturalNumInverse[1] = 1; 
//    for (int i = 2; i <= N; i++) 
//        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p; 
//} 
//// Function to precompute inverse of factorials 
//void InverseofFactorial(ll p) 
//{ 
//    factorialNumInverse[0] = factorialNumInverse[1] = 1; 
//  
//    // precompute inverse of natural numbers 
//    for (int i = 2; i <= N; i++) 
//        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p; 
//} 
//  
//// Function to calculate factorial of 1 to N 
//void factorial(ll p) 
//{ 
//    fact[0] = 1; 
//  
//    // precompute factorials 
//    for (int i = 1; i <= N; i++) { 
//        fact[i] = (fact[i - 1] * i) % p; 
//    } 
//} 
//  
//// Function to return nCr % p in O(1) time 
//ll Binomial(ll N, ll R, ll p) 
//{ 
//    // n C r = n!*inverse(r!)*inverse((n-r)!) 
//    ll ans = ((fact[N] * factorialNumInverse[R]) 
//              % p * factorialNumInverse[N - R]) 
//             % p; 
//    return ans; 
//} 
    
int main()
{
	
 ll k,n;
 cin>>n>>k;
 map<ll,ll> m;
//    InverseofNumber(mod); 
//    InverseofFactorial(mod); 
//    factorial(mod);
    ll val;
 for(int i=0;i<n;i++)
 {
 	cin>>val;
 	m[val]++;
 }
 ll x=0,count=1+n;
 ll s = m.size();
for(auto i=m.begin();i!=m.end();i++)
{

	for(ll j=1;j<=min(k,s);j++)
	{
			auto temp=i;
			temp++;
	 for(ll l=1;l<s-j;l++)
	 {
	   	x = (x%mod * (i->second%mod * temp->second%mod)%mod)%mod;
	   	temp++;
	 }
	}
	count = (count%mod+x%mod)%mod;
	x=0;
}
cout<<count;
return 0;
}

