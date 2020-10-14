#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n ;
	cin>>n;
	priority_queue<int,vector<int>,greater<int>> q;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		q.push(x);	
	}	
	while(!q.empty())
	{
		cout<<q.top()<<" ";
		q.pop();
	}
}


