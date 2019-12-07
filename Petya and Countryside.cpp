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
   ll a[n];
   fi(i,0,n,1)
   cin>>a[i];
   ll res=1,m=1;
   fi(i,0,n,1)
   {
   	res=1;
    int j=i;
    while(j<n and (j+1)<n and a[j]>=a[j+1] )
    {
    	res++;
    	j++;
	}
	j=i;
	while( j>=0 and (j-1)>=0 and a[j]>=a[j-1])
	{
		res++;
		j--;
	}
	m = max(m,res);
   }
   cout<<max(int(m),1);
return 0;
}


