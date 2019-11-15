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
  	ll n;
  	cin>>n;
  	ll a[n];
  	map<ll,ll> m;
  	ll mi=LLONG_MAX;\
  	fi(i,0,n,1)
  	cin>>a[i];
  	if(n==1)
  	cout<<-1<<"\n";
  	else{
  	fi(i,0,n,1)
  	{
  		if(m.find(a[i])!=m.end()){
  			mi = min(mi,abs(m[a[i]]-i));
		  }
  		m[a[i]]=i;
	}
	if(mi==LLONG_MAX)
	cout<<-1<<"\n";
	else
	  cout<<mi+1<<"\n";
    } 
   }
return 0;
}


