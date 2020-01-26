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
///
///
//
//
//
//
//

int main()
{
ll t;
cin>>t;
while(t--)
{
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	ll ar[n];
	fi(i,0,n,1)
	cin>>ar[i];
	ll mi = 100000000000;
	ll f;
	fi(i,0,n,1)
	{
		if((a<ar[i] and ar[i]<b) or (a>ar[i] and ar[i]>b))
		{
			f=ar[i];
			break;
		}
	    else{
		if(abs(b-ar[i])<mi)
		{
			f = ar[i];
			mi=abs(b-ar[i]);
		}
    }
  
	cout<<abs(f-b)+c+abs(f-a)<<"\n";
}
return 0;

}}

