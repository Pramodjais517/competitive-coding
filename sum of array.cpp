#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
#define max 1001
int main()
{
	ll n;
	cin>>n;
	ll arr1[n];
	f(i,0,n,1)
	cin>>arr1[i];
	ll m;
	cin>>m;
	ll arr2[m];
	f(i,0,m,1)
	cin>>arr2[i];
	int sum;
	int t=min(n,m);
	int carry=0;
	int arr[max];
	int size=0;
	while(t--){
		sum=arr1[--n]+arr2[--m] + carry;
		arr[size++]=sum%10;
		carry=sum/10;
	}
	if(n==0)
	{
		while(m--)
		{
		sum=(arr2[m]+carry);
		arr[size++]=sum%10;
		carry=sum/10;
		}
	}else{
		while(n--)
		{
		sum=(arr1[m]+carry);
		arr[size++]=sum%10;
		carry=sum/10;	
		}
	}
	while(carry)
	{
		arr[size++]=carry%10;
		carry/=10;
	}
	for(int i=size-1;i>=0;i--)
	cout<<arr[i]<<", ";
	cout<<"END";
return 0;
}


