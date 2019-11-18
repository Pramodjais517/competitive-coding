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
  	ll n,k;
  	cin>>n>>k;
  	ll a[n];
  	fi(i,0,n,1)
  	cin>>a[i];
  	ll p = 0;
  	ll flag=0;
  	ll i=0;
  	for(i=0;i<n;i++)
  	{
  		p+=a[i];
  		if(p<k)
  		{
  			flag=1;
  			break;	
		  }
		  p-=k;
	  }
	  if(flag)
	  cout<<"NO "<<i+1<<"\n";
	  else
	  cout<<"YES\n";
  }
return 0;
}


