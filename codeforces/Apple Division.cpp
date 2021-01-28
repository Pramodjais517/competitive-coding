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
ll n;
cin>>n;
ll a[n];
ll sum=0;
fi(i,0,n,1)
{
cin>>a[i];
sum+=a[i];
}
ll num = 1 << n;
ll ans = INT_MAX;
while(num > 0)
{
    ll temp = num;
    ll pos = 0;
    ll j=0;
    while(temp > 0 and j<n)
    {
        if(temp & 1)
        {
            pos+=a[j];
        }
        j++;
        temp = temp >> 1;
    }
    ans= min(abs(sum - 2  * pos), ans);
    num--;
}
cout<<ans;
return 0;
}





