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
	ll prof = 0;
	ll last_max = 0;
	vector<pair<ll,ll>> days;
	ll buy = 0;
	fi(i,0,n,1)
	{
		if(a[i] >= a[last_max])
		{
			last_max = i;
 		}
 		else
 		{	
			if(last_max - buy > 0 and a[last_max] - a[buy] > 0)  
 			days.pb({buy, last_max});
 			buy = i;
 			last_max = i;
		}
	}
	if(buy < n - 1)
	days.pb({buy,n-1});
	if(days.size() > 0 )
	for(auto i:days)
	{
		cout<<"("<<i.first<<" "<<i.second<<")"<<" ";
	}
	else
	{
		cout<<"No Profit";
	}
	cout<<"\n";
}
return 0;
}


