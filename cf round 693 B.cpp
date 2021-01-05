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
    ll n;cin>>n;
    ll sum = 0,a,one = 0, two = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a == 1)
            one++;
        else
            two++;
        sum+=a;
    }
    if(one ==0)
    {
        if(sum%2 == 0 and n%2 ==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    else if(two == 0 and n%2 ==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        if(sum %2 == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
return 0;
}


