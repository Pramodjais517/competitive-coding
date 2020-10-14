#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int zero_pointer =0, one_pointer = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0)
		{
			swap(a[i],a[zero_pointer]);
			zero_pointer++;
		}
	}
	one_pointer = zero_pointer;
	for(int i=zero_pointer;i<n;i++)
	{
		if(a[i] == 1)
		{
			swap(a[i],a[one_pointer]);
			one_pointer++;
		}
	}
	for(auto i:a)
	{
		cout<<i<<" ";
	}
	
}
