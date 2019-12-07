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
  	fi(i,0,n,1)
  	{
  		cin>>a[i];
    }
		vector<ll> v;
		ll c=1;
		ll eq=a[0];
		fi(i,1,n,1)
		{
		    if(a[i]==eq)
		    c++;
		    else{
		    	v.pb(c);
		    	c=1;
		    	eq=a[i];
			}
		}
		v.pb(c);
		if(v.size()<3)
		cout<<"0 0 0\n";
		else{
		ll i=0;ll sum=0;
		while(i<v.size() and (sum+v[i])<=n/2)
		{
			sum+=v[i];
			i++;
		}
		
		ll g=v[0];
		ll s=0;
		ll j=1;
		while(s<=g and j<i)
		{
			s+=v[j];j++;
		}
		ll b=0;
		while(j<i)
		{
			b+=v[j];
			j++;
		}
		if(g>=s or g>=b or ((g+s+b)>n/2) or g==0 or s==0 or b==0)
		cout<<"0 0 0\n";
		else
		cout<<g<<" "<<s<<" "<<b<<"\n";
	
}
}
return 0;
}


