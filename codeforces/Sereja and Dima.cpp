#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
ll arr[n];
f(i,0,n,1)
cin>>arr[i];
int serja=0,dima=0;
int term=0;
for(int i=0,j=n-1;i<=j;)
{
	if(arr[i]>arr[j])
	{
	if(term==1)
	{
	serja+=arr[i];	
	term=0;
	}
	 else{
	 	dima+=arr[i];
	 	term=1;
	 }
	 i++;
	}
	else{
	if(term==1)
	{
	serja+=arr[j];	
	term=0;
	}
	 else{
	 	dima+=arr[j];
	 	term=1;
	 }
	 j--;
	}
}
cout<<dima<<" "<<serja;
return 0;
}


