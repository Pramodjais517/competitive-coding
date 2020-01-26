#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
ll root(ll x,ll n)
{
    if(n==0)
    return 1;
    if(n==1)
    return x;
    return x*root(x,n-1);
}
ll exp(ll a, ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll r = pow(a,b/2);
    if(b&1)
    return r*a*r;
    return r*r;
}
int main()
{
ll x,n;
cin>>x>>n;
vector<ll> v;
ull z=pow(x,1.0/n);
for(int i=1;i<=z;i++)
{
    v.pb(i);
}
ll c=0;
ull l=exp(2,v.size())-1;
for(ll i=0;i<=l;i++)
{
    ull j=0; ull s=0;
    ull k=i;
    while(k>0 and j<v.size())
    {
        if((k&1))
        s+= exp(v[j],n);
        k=k>>1;
        j++;
    }
    if(s == x)
    c++;
}
cout<<c<<"\n";
return 0;
}

