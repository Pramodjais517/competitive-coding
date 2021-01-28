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
    if(par[a] < 0 )
    return a;
    else
    {
        ll x =  find(par[a]);
        par[a] = x;
        return x;
    }
}

void Union(ll a,ll b)
{
    if(a==b)
    return;
    else{
        par[a] += par[b];
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
memset(par,-1,sizeof(par));
while(m--)
{
    ll a,b;
    cin>>a>>b;
    a = find(a);
    b = find(b);
    Union(a,b);
}
ll ans = 0;
for(int i=1;i<=n;i++)
{
    if(par[i]<0)
    {
        ans = -par[i];
        cout<<i<<" is parent and has "<<ans<<" node\n"; 
    }
    ans = 0;
}


return 0;
}





