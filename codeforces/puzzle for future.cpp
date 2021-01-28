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
ll t; cin>>t; while(t--){
   ll n;
   cin>>n;
   string b;
   vector<int> ans(n);
   cin>>b;
   int ps = 0;
   for(ll i=0;i<n;i++)
   {
           if((b[i] - '0') == 0)
           {
               if(ps == 0 or ps == 2)
               ans[i] = 1;
               else
               ans[i] = 0;
           }
           else
           {
               if(ps == 0 or ps == 1)
               ans[i] = 1;
               else
               ans[i] = 0;
           }
           ps = (b[i] - '0') + ans[i];
   }
   for(auto i:ans)
   cout<<i;
   cout<<"\n";
   
}
return 0;
}





