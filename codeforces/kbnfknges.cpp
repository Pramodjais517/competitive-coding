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
        string s; cin>>s;
        ll ans=0,cnt=0,x=0;
        for(auto i:s){
            if(i==')' and x==0)
                cnt++;
            else if(i=='(')
                x++;
            else if(i==')')
                x--;
        }
        pr(cnt) nl
    }
    return 0;
}

