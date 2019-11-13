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
	ll s;
	cin>>s;
	ll arr[s];
	fi(i,0,s,1)
	cin>>arr[i];
	sort(arr,arr+s);
	cout<<max(0ll,((lower_bound(arr,arr+s,arr[s-1])-arr)-(upper_bound(arr,arr+s,arr[0])-arr)));
return 0;
}


