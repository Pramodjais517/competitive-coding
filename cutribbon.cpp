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
ll nCr(ll n, ll r) 
{ 
    if (n < r) 
        return 0; 
  
    // Reduces to the form n! / n! 
    if (r == 0) 
        return 1; 
  
    // nCr has been simplified to this form by 
    // expanding numerator and denominator to  
    // the form   n(n - 1)(n - 2)...(n - r + 1) 
    //             ----------------------------- 
    //                         (r!) 
    // in the above equation, (n - r)! is cancelled  
    // out in the numerator and denominator 
  
    ll numerator = 1; 
    for (int i = n; i > n - r; i--) 
        numerator = (numerator * i)%mod; 
  
    ll denominator = 1; 
    for (int i = 1; i < r + 1; i++) 
        denominator = (denominator * i)%mod; 
  
    return (numerator / denominator); 
} 
  
// Returns number of ways to cut  
// a rod of length N into K pieces. 
ll countWays(ll N, ll K) 
{ 
    return nCr(N - 1, K - 1); 
} 

int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n,l;
	cin>>n>>l;
	if(n&1)
	cout<<0<<"\n";
	else
	{
		ll ans=0;
	for(int i=2;i<=n;i++)
	{
		if(((float)n/i- (int)n/i) ==0)
		{
			if(n/i %2 ==0 and n/i <= l) 
			{
				cout<<i<<"\n";
				ans= (ans+countWays(n,i))%mod;
			}
			
		}
	}
//     cout<<ans<<'\n';
	}
}
return 0;
}

