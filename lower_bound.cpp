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

ll upper_bound(ll arr[],ll s,ll n){
	ll start=0,end=s-1;
	ll mid,ans=-1;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==n){
			ans=mid;
			if(arr[mid-1]!=n)
			break;
			else
			end=mid-1;
		}
		else if(n<arr[mid])
		end=mid-1;
		else
		start=mid+1;
	}
	return ans;
}

int main()
{
	ll arr[]={1,2,2,2,2,3,3,4,5};
	cout<<upper_bound(arr,9,2);
return 0;
}


