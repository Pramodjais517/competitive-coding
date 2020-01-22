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
  int a=0,b=0,c=0;
  for(ll i=2;i*i*i < n ;i++)
  {
  	if(n%i == 0)
  	{
  		a = i;
  		int x = n/i;
  		int f =0;
  		for(ll j=2;j*j <x ;j++)
  		{
  			if(x%j==0)
  			{
  				b=j;
  				c = x/b;
  				if(b==c or b==a or a==c)
  				continue;
  				else 
  				{
  					f=1;
  					break;
				  }
			}
		  } if(f==1)
		  {
		  	break;
		  }
	  }
  }
  if(a==-1 or b==-1 or c==-1  or a==b or b==c or c==a)
  {
  	cout<<"NO\n";
  }else {
  	cout<<"YES\n";
  	cout<<a<<" "<<b<<" "<<c<<"\n";
  }
}
return 0;
}

