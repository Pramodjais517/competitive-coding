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


int main()
{
ll t;
cin>>t;
while(t--)
{
 ll a,b,c,n;
 cin>>a>>b>>c>>n;
 int sh = (a+b+c+n)/3;
// if((a+b+c+n)%3!=0 or ((a==b==c) and n%3!=0))
// {
// 	cout<<"NO\n";
// 	continue;
// }
 if((abs(a-sh)+abs(b-sh)+abs(c-sh))==n and (a+b+c+n)%3==0)
 cout<<"YES\n";
 else
 cout<<"NO\n";
}
return 0;
}

