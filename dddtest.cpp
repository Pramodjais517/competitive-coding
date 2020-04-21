#define BOOSTER ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<bits/stdc++.h>
#define REPEAT ll t;cin>>t;while(t--)
#define ll long double
#define rep(i,l,r) for(ll i=l;i<r;i++)
#define all(v) v.begin(),v.end()
#define pb push_back
#define N 1000001
using namespace std;
// bool isprime[N]={0};
// void sieve()
// {
//     isprime[0]=isprime[1]=1;
//     for(ll i=2;i*i<=N;i++)
//     {
//         if(isprime[i]==0)
//         {
//             for(ll j=2*i;j<N;j+=i)
//             {
//                 isprime[j]=1;
//             }
//         }
//     }
// }
ll comp(ll x, ll y, ll z)
{
  ll ans =  (pow(x-y,2)+pow(y-z,2)+pow(z-x,2));
  return ans;
}
void solve()
{
    ll r,g,b;
    cin>>r>>g>>b;
    vector< ll >vr(r),vg(g),vb(b);
    rep(i,0,r)
    {
      cin>>vr[i];
    }
    rep(i,0,g)
    {
      cin>>vg[i];
    }
    rep(i,0,b)
    {
      cin>>vb[i];
    }
    sort(all(vr));
    sort(all(vg));
    sort(all(vb));
    ll ans=pow(10,19);
    ll ci=-1,cj=-1,ck=-1,i,j,k,pi,pj,pk;
    pi = 0;
    i = vr[0];
    pj = lower_bound(vg.begin(),vg.end(),i)-vg.begin();
    pj = min(pj,g-1);
    j = vg[pj];
    pk = lower_bound(vb.begin(),vb.end(),(i+j)/2)-vb.begin();
    pk = min(pk,b-1);
    k = vb[pk];
    ans = min(ans,comp(i,j,k));
    while((ci!=i) && (cj!=j) && (ck!=k))
    {
      ci = i;cj=j;ck=k;
      pi = lower_bound(vr.begin(),vr.end(),(j+k)/2)-vr.begin();
      pi = min(pi,r-1);
      i = vr[pi];
      pj = lower_bound(vg.begin(),vg.end(),(i+k)/2)-vg.begin();
      pj = min(pj,g-1);
      j = vg[pj];
      pk = lower_bound(vb.begin(),vb.end(),(i+j)/2)-vb.begin();
      pk = min(pk,b-1);
      k = vb[pk];
      ans = min(ans,comp(i,j,k));
    }
    cout<<ans<<endl;
}

int main()
{
    BOOSTER
    // sieve();
    REPEAT
    solve();
    return 0;
}
