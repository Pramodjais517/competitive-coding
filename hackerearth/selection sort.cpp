#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

vector<int> selectionSort(vector<int> arr, int n,int x)
{   
    int min;
	for(int i=0;i<n-1 and x>0;i++,x--)
	{
		min = i;
		f(j,i+1,n,1)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(arr[i],arr[min]);
	}
	return arr;
}

int main()
{
int n,x;
cin>>n>>x;
vector<int> arr;
int val;
f(i,0,n,1)
{
	cin>>val;
	arr.pb(val);
}
arr=selectionSort(arr,n,x);
f(i,0,n,1)
cout<<arr[i]<<" ";
return 0;
}


