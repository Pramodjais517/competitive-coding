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
    ll arr[n];
    memset(arr,0,sizeof(arr));
    ll a = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr[i] += a;
        if((i + a) < n)
        arr[i+a] = max(arr[i+a] ,  arr[i]);
    }
    ll mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx= max(mx, arr[i]);
    }
    cout<<mx<<"\n";
}
return 0;
}


