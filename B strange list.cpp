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
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t; cin>>t; while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    fi(i,0,n,1)
    cin>>a[i];
    ll lastH = 0;
    ll lastV = 0;
    bool adj = 0;
    ll hill =0, valley = 0;
    if(n <= 3)
    {
        cout<<0<<"\n";
        continue;
    }
    fi(i,0,n,1)
    {
        if(i+2 < n)
        {
            if(a[i+1] >  a[i] and a[i+1] > a[i+2])
            {
                hill++;
                lastH = i;
            }
            if(a[i+1] < a[i] and a[i+1] < a[i+2])
            {
                valley++;
                lastV = i;
            }
            if(abs(lastH - lastV) == 1)
            adj = 1;
        }
    }
    if(!adj)
    cout<<max(0ll,valley + hill - 1)<<"\n";
    else
    cout<<max(0ll,(valley + hill) - 3)<<"\n";
}
return 0;
}





