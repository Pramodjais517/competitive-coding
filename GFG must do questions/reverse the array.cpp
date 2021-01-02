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

void reverse(int arr[],int l,int r)
{
	for(int i=l;i<=r/2;i++)
	{
		swap(arr[i],arr[r-i+l]);
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int size = n-1;
while(size>0)
{
	int ind = 0;
	int mx = INT_MIN;
	for(int i = 0;i<=size;i++)
	{
		if(arr[i] > mx)
		{
			mx = arr[i];
			ind  = i;
		}
	}
	reverse(arr,0,ind);
	reverse(arr,0,size);
	size--;
}
fi(i,0,n,1)
cout<<arr[i]<<" ";
return 0;
}


