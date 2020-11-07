#include<bits/stdc++.h>
using namespace std;
int mat[100001][100001];
bool vis[100001][100001];
int  cnt = 0;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

bool isvalid(int i,int j,int n, int m)
{
	if(i<0 or i>=n or j<0 or j>=m)
	{
		return 0;
	}
	if(vis[i][j] or mat[i][j]==0)
	return 0;
	return 1;
}
int dfs(int x,int y,int n,int m)
{
	vis[x][y]= 1;
	cnt++;
	for(int i=0;i<4;i++)
	{
		if(isvalid(x+dx[i], y+dy[i], n, m))
		{
			dfs(x+dx[i],y+dy[i],n,m);
		}
	}
}

int main()
{
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cin>>mat[i][j];
		vis[i][j] = 0;
	}
}
int ans = INT_MIN;
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(!vis[i][j] and mat[i][j]==1)
		{
			dfs(i,j,n,m);
			ans = max(ans,cnt);
			cnt = 0;
		}
	}
}
cout<<ans<<"\n";
return 0;
}


