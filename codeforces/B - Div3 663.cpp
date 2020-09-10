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

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
       ll a,b,x,y,n;
	   cin>>a>>b>>x>>y>>n;
	   ll ta=a,tb=b,tx=x,ty=y,tn=n;
	   ll diff =0;
	   if((a-x) < n)
	   	diff = a - x;
	   else
	   diff = n;
	   a-=diff, n -= diff;
	   b -= min(b - y, n);
	   ll c=min(tb-ty,tn);
	   tb-=c, tn-=c;
	   ta -=min(ta-tx,tn);
	   cout<<min(ta*tb,a*b)<<"\n";
}
return 0;
}


