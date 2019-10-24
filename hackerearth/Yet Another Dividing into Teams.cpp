#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	int n;
  	cin>>n;
  	int arr[n];
  	f(i,0,n,1)
  	cin>>arr[i];
  	sort(arr,arr+n);
  	int flag=0;
  	f(i,1,n,1)
  	{
  		if(abs(arr[i-1]-arr[i])==1)
  		{
		 flag=1;
     	}
	  }
   if(flag==0)
   cout<<1<<"\n";
   else
   cout<<2<<"\n";
  }
return 0;
}


