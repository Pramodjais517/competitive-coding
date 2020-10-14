#include<bits/stdc++.h>
using namespace std;

vector<int> adlist[10001];
bool visited[10001];

bool dfs(int v, int par)
{
	visited[v] = 1;
	for(auto child:adlist[v])
	{
		if(!visited[child])
		{
			if(dfs(child,v))
			return true;
		}
		else
		{
			if(par != child)
			return true;
		}
	}
	return false;
}





int main()
{
	int  n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		adlist[a].push_back(b);
		adlist[b].push_back(a);
	}
	
	cout<<dfs(1,0);
}
