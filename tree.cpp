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
   ll t,n;
   cin>>t;
   while(t--)
   {
  	cin>>n;
  	ll a[n];
  	fi(i,0,n,1)
  	{
  		cin>>a[i];
	  
   }
   ll start= a[0],end=a[n-1];ll count=0;
   fi(i,0,n-1,1)
   {
   	if(a[i]+1==a[i+1])
   	{
    if(count==0)
    {
    	start=a[i];
	}
	end = a[i+1];
	count++;
    continue;
	}
	if(count>1)
	{
	cout<<start<<"..."<<end<<",";
	count=0;
	}
	else if(count==1)
	{
	
	  cout<<start<<","<<end<<",";
	  count=0;
	}
	else
	{
	cout<<a[i]<<",";	
	count=0;
	}
	
   }
   if(count>1)
   cout<<start<<"..."<<a[n-1]<<"\n";
   else if(count==1)
   cout<<start<<","<<a[n-1]<<'\n';
   else
   cout<<a[n-1]<<'\n';
}
   return 0;
}


