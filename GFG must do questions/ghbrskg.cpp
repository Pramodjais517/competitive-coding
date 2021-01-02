#include<bits/stdc++.h>
using namespace std;
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

int numMusicPlaylists(ll N, ll L, ll K) {
        int MOD = 1000000007;

        ll dp[L+1][N+1];
        dp[0][0] = 1;
        for (ll i = 1; i <= L; ++i)
            for (ll j = 1; j <= N; ++j) {
                dp[i][j] += dp[i-1][j-1] * (N-j+1);
                dp[i][j] += dp[i-1][j] * max(j-K, 0ll);
                dp[i][j] %= MOD;
            }

        return (int) dp[L][N];
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n,m,k;
	cin>>n>>m>>k;
	cout<<numMusicPlaylists(n,m,k)<<"\n";
	
}
return 0;
}


