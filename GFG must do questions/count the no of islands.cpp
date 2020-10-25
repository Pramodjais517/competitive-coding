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

int vis[100001];

int runcycle(pair<int, int> arrPos[],int src, int n)
{
	int node = 0;
	int next = src;
	while(!vis[next])
	{
		vis[next] = 1;
		next = arrPos[next].second;
		node++;
	}
	return node-1;
}


int minSwaps(int arr[], int n){
	int ans =0,node = 0;
	pair<int, int> arrPos[n];
	for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos,arrPos+n);
	for(int i=0;i<n;i++)
	{
		if(!vis[i] and arrPos[i].second != i)
		{
			int node = runcycle(arrPos,i,n);
			ans+= node;
		}
	}
	return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		vis[i] = 0;
	}	
	int ans = minSwaps(arr,n);
	cout<<ans<<"\n";
}
return 0;
}


