#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(int prev[][100],int n, int k)
{
	//base case
	if(k>n)
	{
		//print the result
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<prev[i][j]<<" ";
			}
			cout<<"\n";
		}
		return;
	}
	int newa[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j or (i-1) == k)
			{
				newa[i][j] = prev[i][j];
			}
			else
			newa[i][j] = min(prev[i][j], prev[i][k-1] + prev[k-1][j]);
		}
	}
	solve(newa,n,k+1);
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
	int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	solve(a,n,1);
}
return 0;
}


