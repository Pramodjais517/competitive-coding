#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
int min_index(ll arr[],int m,int n)
{
	for(ll i=0;i<n;i++)
  			if(arr[i]==m)
  				return i;
}
find_min(ll arr[],ll start,ll end )
{
	ll m=1001;
	for(ll i=start;i<end;i++){
		m=min(m,arr[i]);
	}
	return m;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
  	ll n;
  	cin>>n;
  	ll arr[n];
  	f(i,0,n,1)
  	cin>>arr[i];
  	ll count=0;ll start=0;
  	while(count<n-1)
  	{
  	int m=find_min(arr,start,n);
  	ll pos= min_index(arr,m,n);
  	if(pos-start>00)
  	{
  	while(pos>=1 and count<n-1)
  	{
  		swap(arr[pos],arr[pos-1]);
  		pos--;
  		count++;
    } 
}
    else
    count++;
	 	start++;
    }
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  cout<<"\n";		
  }
return 0;
}


