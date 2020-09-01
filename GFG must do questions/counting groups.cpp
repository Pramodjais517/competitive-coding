#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll grid[10001][10001];
ll vis[10001][10001];
ll cnt,n,m;

bool isvalid(ll x,ll y)
{
	if(x<0 or x>=n or y<0 or y>=m)
	return false;
	if(vis[x][y])
	return false;
	if(grid[x][y]==0)
	return false;
	return true;
}

ll dx[] = {-1,0,1,0};
ll dy[] = {0,1,0,-1};

void dfs(ll x, ll y)
{
	vis[x][y] = 1;
	cnt++;
	for(int i=0;i<4;i++)
	{
		if(isvalid(x + dx[i], y + dy[i]))
		{
			dfs(x + dx[i],y + dy[i]);
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m;
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cin>>grid[i][j];
		vis[i][j] = 0;
	}
}
ll t;
cin>>t;
ll test[t];
for(ll i=0;i<t;i++)
{
	cin>>test[i];
}
map<ll,ll> mp;
ll ans = 0;
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cnt = 0;
		if(!vis[i][j] and grid[i][j] == 1)
		{
			dfs(i,j);
			mp[cnt]++;
		}
	}
}
for(ll i=0;i<t;i++)
{
	cout<<mp[test[i]]<<"\n";
}
return 0;
}


