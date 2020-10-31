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

int mat[21][21];
int vis[21][21];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

bool isvalid(int i,int j,int n)
{
	if(i<0 or i>=n or j<0 or j>=n)
	{
		return 0;
	}
	if(vis[i][j] == 0 and (mat[i][j]==3 or mat[i][j]==2)) 
	return 1;
	return 0;
}

bool bfs(int initi,int initj,int n)
{
	queue<pair<int,int>> q;
	vis[initi][initj] = 1;
	q.push({initi,initj});
	while(!q.empty())
	{
		pair<int,int> curr = q.front();
		q.pop();
		if(mat[curr.first][curr.second] == 2)
		{
		    return 1;
		}
		for(int i=0;i<4;i++)
		{
			if(isvalid(curr.first + dx[i] , curr.second + dy[i],n))
			{
				vis[curr.first + dx[i]][curr.second + dy[i]] = 1;
				q.push({curr.first + dx[i], curr.second + dy[i]});
			}
		}
	}
	return 0;
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
	int srci,srcj;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==1)
			{
				srci=i;
				srcj=j;
			}
			vis[i][j]=0;
		}
	}
	cout<<bfs(srci,srcj,n)<<"\n";
}
return 0;
}


