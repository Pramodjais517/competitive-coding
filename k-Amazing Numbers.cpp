#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

set<ll> s;

int minSubarray(ll arr[], ll n, ll k) 
{ 
    map<int, int> Map; 
    int l = 0; 
  
    // Traverse the array 
    for (int i = 0; i < n; i++) { 
  
        l++; 
        Map[arr[i]]++; 
        if (l == k) { 

            auto itMin = Map.begin(); 

            s.insert(itMin->first);
  
            Map[arr[i - k + 1]]--;  
            if (Map[arr[i - k + 1]] == 0) { 
                Map.erase(arr[i - k + 1]); 
            } 
  
            l--; 
        } 
    } 
    return 0; 
} 


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	for(ll i=1;i<=n;i++)
	{
		minSubarray(a,n,i);
		if(s.size()>1)
		{
			cout<<"-1 ";
		}
		else
		{
			cout<<*s.begin()<<" ";	
		}
		s.clear();
	}
	cout<<"\n";
}
return 0;
}


