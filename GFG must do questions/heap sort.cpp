#include<bits/stdc++.h>
using namespace std;
#define ll long long

void heapify(vector<int> &v,int i,int n)
{
	int max = i;
	int left = i*2 + 1;
	int right = i*2 + 2;
	if(left<n and v[left] > v[max])
	max = left;
	if(right<n and v[right] > v[max])
	max = right;
	if(max != i)
	{
		swap(v[i],v[max]);
		heapify(v,max,n);
	}
}

void buildheap(vector<int> &v)
{
	for(int i=(v.size() - 1 )/2;i>=0;i--)
	{
		heapify(v,i,v.size());
	}
}

void heapsort(vector<int> &v,int n)
{
	if(n<1)
	return;
		swap(v[0],v[n-1]);
		n--;
		heapify(v,0,n);
		heapsort(v,n);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int> v(k	);
for(int i=0;i<n;i++)
cin>>v[i];
buildheap(v);
heapsort(v,n);
for(int i=0;i<n;i++)
cout<<v[i]<<" ";
return 0;
}


