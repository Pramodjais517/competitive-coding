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
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1) cin>>a[i];
	ll mid=0,lo=0,hi=n-1;
	while(mid<=hi){
		if(a[mid]==1) mid++;
		else if(a[mid]==2){
			swap(a[mid],a[hi]); hi--;
		}else {
			swap(a[mid],a[lo]);
			mid++;lo++;
		}
	}
	fi(i,0,n,1)
	cout<<a[i]<<" ";
return 0;
}


