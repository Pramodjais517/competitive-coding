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
    vector<ll> arr(n);
    fi(i,0,n,1)
    cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<ll>());
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            if(arr[i] & 1)
                ans-=arr[i];
        }
        else{
            if(arr[i]%2 == 0)
                ans+=arr[i];
        }
    }
    if(ans>0)
        cout<<"Alice\n";
    else if(ans < 0)
        cout<<"Bob\n";
    else
        cout<<"Tie\n";
}
return 0;
}


