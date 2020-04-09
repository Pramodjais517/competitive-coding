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
ll n = 2*1000000;
bool prime[2*1000000+1];
void Sieve() 
{  
     
    memset(prime, true, sizeof(prime)); 
    prime[0]=false;
    prime[1]=false;
    for (int i=2; i*i<=n; i++) 
    { 
        if (prime[i] == true) 
        {   
            for (int j=i*i; j<=n; j += i) 
                prime[j] = false; 
        } 
    }  
    return;
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
prime[0]=false;
prime[1]=false;
Sieve();
ll t;
cin>>t;
while(t--)
{
	ll p;
	cin>>p;
	ll ar[p];
	for(ll i=0;i<p;i++)
	cin>>ar[i];
	ll st=0,en = p-1;
	ll count=0;
	for(ll i=0;i<p-1;i++)
	{
	 for(ll j=i+1;j<p;j++)
	 {
	 	if(prime[ar[i]+ar[j]])
	 	count++;
	 }
	}
	cout<<count<<"\n";
}
return 0;
}

