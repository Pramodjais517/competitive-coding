#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define tc int t; cin>>t; while(t--)
#define mod 1000000007
#define endl "\n"
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
	
        int n;
        cin>>n;
        ll a[n+1]={0};
        for(int i=1;i<=n;i++){
            ll x;
            cin>>x;
            a[x]++;
        }
        ll maxm=0,temp;
        ll cnt=0;
        for(int i=1;i<=n;i++){
            ll m=maxm;
            maxm=max(maxm,a[i]);
            if(a[i]>0)cnt++;
        }
        cnt--;
        if(n==1)cout<<0<<endl;
        else if(cnt>=maxm)cout<<maxm<<endl;
        else if(maxm-cnt==1)cout<<cnt<<endl;
        else cout<<cnt+1<<endl;
    }
    return 0;
}
