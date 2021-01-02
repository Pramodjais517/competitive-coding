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

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(vector<ll> arr) 
{ 
    // Initialize result 
    ll n = arr.size();
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (ll i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	vector<ll> arr;
	ll temp = n;
	while(temp)
	{
		if(temp%10!=0)
		arr.pb(temp%10);
		temp/=10;
	}
	ll lcm = findlcm(arr);
	while(n%lcm != 0)
	{
		n++;
	}
	cout<<n<<"\n";
}
return 0;
}


