#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;
#define ll long long
#define ff first
#define ss second
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
#define pn(x) cout<<x<<"\n";
#define sp cout<<" ";
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define rev reverse
#define tc ll t; cin>>t; while(t--)
#define pq priority_queue
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
        ll n; cin>>n;
        vt<ll> a(n);
        fi(i,0,n,1) cin>>a[i];
        string ans[n+1];
        
        if(a[0]>0){
            pn(string(a[0],'a'));
        }
        else{
            pn('b');
        }
        ll cnt=0;
        fi(i,1,n,1){
            int y = max(a[i],a[i-1]);
            if(y!=0){
                pn(string(y,'a'));
            }
            else{
                char b = char('c' + cnt);
                pn(b)
                cnt+=2; cnt%=26;
            }
        }

        if(a[n-1]>0){
            pn(string(a[n-1],'a'));
        }
        else{ 
            pn('z');
        }
    }
    return 0;
}
