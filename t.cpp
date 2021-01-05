#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout<<"\n";
#define vt vector
#define pll pair<ll,ll>
#define pb push_back
#define ps(x) cout<<x<<" ";
#define pn(x) cout<<x<<"\n";
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define tc ll t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
        ll n; cin>>n;
        vt<ll> a,b;
        for(ll i=0; i<n; i++){
            ll x; cin>>x;
            if(x&1) b.pb(x);
            else a.pb(x);
        }

        sort(all(a),greater<ll>()),sort(all(b),greater<ll>());
        bool f=1;
        ll i=0,j=0;

        ll z=0,s1=0,s2=0;
        while(z < n){
            if(f){
                if(i == a.size()){
                    j++;
                }
                else{
                    if(j == b.size()){
                        s1 += a[i++];
                    }
                    else{
                        if(a[i] >= b[j]){
                            s1 += a[i++];
                        }
                        else{
                            j++;
                        }
                    }
                }
            }
            else{
                if(j == b.size()){
                    i++;
                }
                else{
                    if(i == a.size()){
                        s2 += b[j++];
                    }
                    else{
                        if(a[i] <= b[j]){
                            s2 += b[j++];
                        }
                        else{
                            i++;
                        }
                    }
                }
            }
            f^=1;
            z++;
        }

        if(s1 == s2) pn("Tie")
        else{
            if(s1>s2) pn("Alice")
            else pn("Bob")
        }
    }
    return 0;
}
