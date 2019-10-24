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
  	int dumb[n];
  	memset(dumb, 0, sizeof(dumb)); 
  	f(i,0,n,1)
  	cin>>arr[i];
  	int count=0,j;
  	f(i,0,n,1)
  	{
  		j=i;
  		count=0;
  		while(arr[j]!=i+1)
  		{
  			j=arr[j]-1;
  			count++;
		}
		dumb[i]=count+1;	
	  }
	  f(i,0,n,1)
	  cout<<dumb[i]<<" ";
	  cout<<"\n";
  }
return 0;
}


