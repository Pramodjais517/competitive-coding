#include<bits/stdc++.h>
using namespace std;
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


bool prime[10001]; 
bool SieveOfEratosthenes(int n) 
{  
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
SieveOfEratosthenes(10001);
while(t--)
{
	ll n;
	cin>>n;
	ll a[n+1];
	fi(i,1,n+1,1)
	cin>>a[i];
	bool f = 0;
	fi(i,1,n+1,1)
	{
		 	if(a[i]==i)
            continue;
            if(i%a[i]==0)
            continue;
            else 
            f=1;
	}
	if(f)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
}
return 0;
}


