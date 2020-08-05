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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
        ll n; cin>>n; 
        vt<ll> a(n); 
        set<ll> s;
        fi(i,0,n,1) cin>>a[i],s.insert(a[i]);
        if(n==1){pn(0) continue;}
        else if(n==2 or n==3){pn(1) continue;}
        else if(s.size()==1)
            pn(n/2)
        else{
            ll ans=0;
            fie(i,1,2*n,1){
                vt<ll> arr(n,0);
                ll cnt=0;
                fi(j,0,n,1){
                    fi(k,j+1,n,1){
                        if(a[j]+a[k]==i and arr[k]!=1 and arr[j]!=1)
                            cnt++,arr[k]=1,arr[j]=1;
                    }
                }
                ans=max(ans,cnt);
            }
            pn(ans)
        }
    }
    return 0;
}
