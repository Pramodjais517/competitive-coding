#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int mat[20][20];
int vis[20][20];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

bool isvalid(int i,int j,int n,int m)
{
	if(i<0 or i>=n or j<0 or j>=m)
	{
		return 0;
	}
	if(vis[i][j] or mat[i][j]==0)
	return 0;
	return 1;
}

int bfs(int initi,int initj,int x,int y,int n,int m)
{
	queue<pair<pair<int,int>,int>> q;
	vis[initi][initj] = 1;
	q.push({{initi,initj},0});
	while(!q.empty())
	{
		pair<pair<int,int>,int> curr = q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			if(!vis[curr.first.first + dx[i]][curr.first.second + dy[i]] and isvalid(curr.first.first + dx[i] , curr.first.second + dy[i],n,m))
			{
				vis[curr.first.first + dx[i]][curr.first.second + dy[i]] = 1;
				q.push({{curr.first.first + dx[i], curr.first.second + dy[i]},curr.second + 1});
				if(curr.first.first + dx[i] == x and curr.first.second + dy[i] == y)
				{
					return curr.second;
				}
			}
		}
	}
	return -1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
			vis[i][j]=0;
		}
	}
//	int x,y;cin>>x>>y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
//	int x,y;cin>>x>>y;
//	cout<<bfs(0,0,x,y,n,m)+1<<"\n";
}
return 0;
}


