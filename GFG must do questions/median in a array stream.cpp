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

void push(vector<int> &arr,int data,int i)
{
	arr.push_back(data);
	int idx = i;
	int par = (i-1)/2;
	while(par>=0 and arr[par] < arr[idx])
	{
		swap(arr[idx],arr[par]);
		idx = par;
		par = (idx - 1)/2;
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,val;
cin>>n;
vector<int> arr;
for(int i=0;i<n;i++)
{
	cin>>val;
	push(arr,val,i);
	if(i%2 == 0)
	cout<<arr[i/2]<<"\n";
	else
	cout<<(arr[i/2] + arr[i/2 + 1])/2<<"\n";
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}


