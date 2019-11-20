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
 ll n,m;
 cin>>n>>m;
 ll req,p=0,l;
 fie(i,1,n,1)
 {
 	l=i%10;
 	req = l%5;
 	if(req==0)
 	req = 5;
 	else
 	req=5-req;
 	if(req<=m)
 	{
 		p+=(m-req)/5+1;
    }
 }
 cout<<p<<'\n';
return 0;
}


