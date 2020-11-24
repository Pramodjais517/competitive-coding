#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Heap{
	vector<int> v;
	
	public:
		
		void push(int data)
		{
			v.push_back(data);
			int idx = v.size() - 1;
			int par = (idx - 1) / 2 ;
			while(par>=0 and v[idx] < v[par])
			{
				swap(v[idx],v[par]);
				idx = par;
				par = idx/2;
			}
		}
		
		void display()
		{
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<"\n";
		}
		void heapify(int i)
		{
			int min = i;
			int left = i * 2 + 1;
			int right = i*2 + 2;
			if(left<v.size() and v[left] < v[min])
			min = left;
			if(right<v.size() and v[right] < v[min])
			min = right;
			if(min != i)
			{
				swap(v[i],v[min]);
				heapify(min);
			}
		}
		int extractmin()
		{
			if(v.size()==0)
			{
				return -1;
			}
			int min = v[0];
			swap(v[0],v[v.size()-1]);
			v.pop_back();
			heapify(0);
			return min;
		}
};

int main()
{
int n;
cin>>n;
Heap h ;
int val;
for(int i=1;i<=n;i++)
{
	cin>>val;
	h.push(val);
	
}
h.display();
cout<<h.extractmin()<<" is min\n";
h.display();
return 0;
}


