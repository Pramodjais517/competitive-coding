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
		int arr[101];
		memset(arr,0,sizeof(arr));
		int n;
		cin>>n;
		ll a;
		fie(i,1,n,1)
		{
			cin>>a;
			arr[a]=i;
		}
		
		fie(i,1,n,1)
		{
			if(arr[i]!=0)
		     cout<<arr[i]<<" ";
		 }
		return 0;
	}
	

