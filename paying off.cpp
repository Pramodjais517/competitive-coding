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

ll subsum(ll a[],ll n)
{
	ll i=0,sum=0;
	while(n)
	{
		if(n&1)
		sum+=a[i];
		n=n>>1;
		i++;
	}
	return sum;
}
int main()
{
   ll t;
   cin>>t;ll n,m;
   while(t--)
  {
  	cin>>n>>m;
  	ll a[n];
  	fi(i,0,n,1)
  	{
  		cin>>a[i];
    }
    ll range = 1<<n;
    bool flag=0;
    fi(i,0,range,1)
    {
    	ll sum=subsum(a,i);
    	if(sum==m)
    	{
    		flag=1;
    		break;
		}
	}
	if(!flag)
	cout<<"No\n";
	else cout<<"Yes\n";
  }
return 0;
}


