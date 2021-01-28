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
    ll n, x; cin>>n>>x;
    vector <pair<ll,ll>> arr;
    fi(i,0,n,1){
        ll a;
        cin>>a;
       	arr.pb({a, 1});
    }
    fi(i,0,n,1){
        if(arr[i].F % x == 0) {
      		n++;
      		arr.pb({arr[i].F/x, x*arr[i].S});
       	}
       	else 
           break;
    }
    ll ans = 0;
    for(auto i:arr) 
    ans += i.F*i.S;
    cout<<ans<<endl;
}
return 0;
}





