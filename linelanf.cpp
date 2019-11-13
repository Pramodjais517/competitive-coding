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
	#define itr(i,ar) for(auto &i:ar)
	#define show(ar) for(auto &i:ar) cout<<i<<" "
	
	int main()
	{
		ll n;cin>>n; ll arr[n];fi(i,0,n,1) cin>>arr[i];fi(i,0,n-1,1){
			if(i>0)
			cout<<min(abs(arr[i+1]-arr[i]),abs(arr[i]-arr[i-1]))<< " "<<max(abs(arr[i]-arr[0]),abs(arr[n-1]-arr[i]))<<"\n";
			else cout<<abs(arr[i+1]-arr[i])<<" "<<abs(arr[n-1]-arr[i])<<"\n";
		}
		cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0])<<"\n";
	return 0;
	}
	

