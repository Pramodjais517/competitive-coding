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
ll partition(ll a[],ll l,ll r)
{
	ll n = (r - l) + 1;
	ll rnd = l + rand() % n;
	swap(a[rnd], a[r]);
	ll pivot = a[r];
	ll i = l; 	
	for(ll j=l;j<r;j++)
	{
		if(a[j] <= pivot)
		{
			swap(a[i],a[j]);
			i++;
		}
	} 
	swap(a[i], a[r]);
	return i;
}

void solve(ll a[],ll l,ll r,ll k)
{
	if(l<r)
	{
		ll pivot = partition(a,l,r);
		if(pivot == (k - 1))
		return;
		else if(pivot < k)
		solve(a,pivot+1,r,k);
		else
		solve(a,l,pivot-1,k);
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n,k;
	cin>>n;
	ll a[n];
	fi(i,0,n,1)
	cin>>a[i];
	cin>>k;
	solve(a,0,n-1,k);
	cout<<a[k - 1]<<"\n";
}
return 0;
}


