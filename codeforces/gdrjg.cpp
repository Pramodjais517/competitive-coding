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

bool arr[1000001];

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
memset(arr,0,sizeof(arr));
for(int i=0;i<=1000;i++)
{
    for(int j=0;j<=1000;j++)
    {
        ll val = 2020*i + 2021 * j;
        if(val <= 1000006)
        arr[val] = 1;
    }
}
ll t; cin>>t; while(t--){
   ll n;
   cin>>n;
   if(arr[n])
   cout<<"Yes\n";
   else
   cout<<"No\n";
}
return 0;
}





