#include<bits/stdc++.h>
using namespace std;
// template starts here
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
#define mod 1000000007

// template ends here
long long solve(vector<int> arr)
{
	if(arr.size() & 1)
	return 0;
	else{
		long long ans = 0;
		for(int i=0;i< arr.size();i++)
		{
			ans = ans^arr[i];
		}
		return ans;
	}
}

int main()
{
	
	ll n;
	cin>>n;
	vector<int> arr(n);
	fi(i,0,n,1)
	cin>>arr[i];
	cout<<solve(arr);
return 0;
}

