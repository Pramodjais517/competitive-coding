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

bool possible(ll arr[],ll s, ll n,ll c)
{
	ll count = 1;
	ll b = arr[0];
	fi(i,1,s,1)
	{
		if(arr[i]-b>=n)
		{
		count++;
		if(count>=c)
		return 1;
		b = arr[i];	
		}
	}
	return 0;
}

int main()
{
   ll n,c,t;
   cin>>t;
   while(t--)
   {
   cin>>n>>c;
   ll l = LLONG_MAX;
   ll h = LLONG_MIN;
   ll arr[n];
   fi(i,0,n,1)
   {
   	cin>>arr[i];
   }
   sort(arr,arr+n);
   l = arr[0];
   h = arr[n-1];
   ll mid ,ans =-1;
   while(l<=h)
   {
   	mid = (h+l)/2;
   	if(possible(arr,n,mid, c))
   	{
   		ans = mid;
   		l = mid+1;
    }
    else{
    	
    	h = mid-1;
	}
   }
   cout<<ans<<"\n";
}
return 0;
}


