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
ll arr[4];
f(i,0,4,1)
cin>>arr[i];
ll count=0,ans=0;
f(i,0,4,1)
{
	count=0;
	f(j,i+1,4,1)
	{
		if(arr[i]==arr[j] and arr[j]!=0)
		{
		count++;
		arr[j]=0;
	    }
	}
	if(count>=1)
	ans+=count;
}
cout<<ans;
return 0;
}


