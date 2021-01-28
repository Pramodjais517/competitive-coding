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
ll par[100001];

ll find(ll a)
{
    if(par[a] == a)
    return a;
    else
    return par[a] = find(par[a]);
}

void Union(ll a,ll b)
{
    if(a == b)
    return;
    else
    {
        par[b] = a;   
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,m;
cin>>n>>m;
for(int i=1;i<=n;i++)
{
    par[i] = i;
}
while(m--)
{
    ll a,b;
    cin>>a>>b;
    a = find(a);
    b = find(b);
    Union(a,b);
}
ll ans = 0;
for(ll i=1;i<=n;i++)
{
    if(par[i] == i)
    ans+=1;
}
cout<<ans<<"\n";
return 0;
}





