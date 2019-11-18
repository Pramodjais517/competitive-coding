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
	ll n;
	cin>>n;
	set<ll> s;
	ll a[n];
	if(n==1){
		cout<<-1<<'\n';
		return 0;
	}
	fi(i,0,n,1)
	{
		cin>>a[i];
	}
	ll sum=0;
	vector<ll> c;
	ll count=0;
	ll d=0;
	fi(i,0,n,1)
	{
 	 if(s.find(a[i])!=s.end())
	  {
	  	cout<<"-1\n";
	  	return 0;
	  }
	 if(a[i]<0)
	  {
	  	if(s.find(-1*a[i])==s.end())
	  	{
	  		cout<<"-1\n";
	  		return 0;
		}
	  }
	  else 
	  s.insert(a[i]);
	  sum+=a[i];
	  if(sum==0)
	  {
	  	d++;
	  	c.pb(++count);
	  	count=0;
	  	s.clear();
	  }	
	  else{
	  	count++;
	  }
	}
	if(s.size()!=0)
	cout<<"-1\n";
	else
	{
	cout<<d<<"\n";
	fi(i,0,c.size(),1)
	cout<<c[i]<<" ";
	}
return 0;
}


