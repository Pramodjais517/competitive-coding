#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout<<"\n";
#define vt vector
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
        if(n==1) pn(0)
        else if(n==2) pn(1)
        else if(n%2==0) pn(2)
        else{
            if(n-1==2) pn(2)
            else pn(3)
        }
    }
    return 0;
}
