#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 100007

vector<bool> arr(mod+1,true);
vector<ll> prime;

void sieve()
{
    arr[0] = arr[1]  = false;
    for(ll i =2;i*i<=mod;i++)
    {
        if(arr[i])
        {
            for(ll j = i*i;j<=mod;j+=i)
            {
                arr[j] = false;
            }
        }
    }
    for(ll i=2;i<mod;i++)
    {
        if(arr[i])
        {
            prime.pb(i);
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
sieve();
ll t; cin>>t; while(t--){
   
   ll d;
   cin>>d;
   int x = *lower_bound(prime.begin(),prime.end(),1+d);
   int y = *lower_bound(prime.begin(),prime.end(),x+d);
   cout<<x*y<<"\n";
 }
return 0;
}





