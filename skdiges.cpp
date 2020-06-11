#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;
#define ll long long
#define fr first
#define se second
#define fi(i,s,e,inc) for(auto i=s; i<e; i+=inc)
#define fie(i,s,e,inc) for(auto i=s; i<=e; i+=inc)
#define fd(i,s,e,dec) for(auto i=s; i>e; i-=dec)
#define fde(i,s,e,dec) for(auto i=s; i>=e; i-=dec)
#define umap tr1::unordered_map
#define nl cout<<"\n";
#define vt vector
#define pb push_back
#define pr(x) cout<<x;
#define ps(x) cout<<x<<" ";
#define sp cout<<" ";
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define rev reverse
#define tc ll t; cin>>t; while(t--)
#define pq priority_queue
int main()
{
    tc{
        ll n; cin>>n;
        vt<ll> a(n+1);
        fie(i,1,n,1) cin>>a[i];
        sort(all(a));
        ll cnt=1;
        ll i=1;
        bool f=0;
        ll ans=1;
        ll temp;
        while(i<=n){
            ll curr = a[i];
            if(cnt>=curr){
                ans=cnt;
                f=1;
            }
            cnt++;
            i++;
        }
        ans = ans + ((f&1) ? 1:0);
        pr(ans) nl
    }
    return 0;
}
