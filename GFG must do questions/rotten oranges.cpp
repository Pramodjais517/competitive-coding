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

int mat[101][101];

bool isvalid(int i,int j,int n,int m)
{
	if(i<0 or i>=n or j<0 or j>=m) 
	return 0;
	if(mat[i][j] ==0 or mat[i][j]>=2)
	return 0;
	return 1;
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
	queue<pair<int,int>> q;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j] == 2)
			{
				q.push({i,j});
			}
		}
	}
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	while(!q.empty())
	{
		pair<int,int> curr = q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			if(isvalid(curr.first + dx[i],curr.second + dy[i],n, m))
			{
				mat[curr.first + dx[i]][curr.second + dy[i]] = mat[curr.first][curr.second] + 1;
				q.push({curr.first+dx[i],curr.second + dy[i]});
			}
		}
	}
	int ans = INT_MIN;bool f = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat[i][j] ==1)
			{
				f = 1;
				break;
			}
			ans = max(ans,mat[i][j] - 2);
		}
	}
	if(!f)
	cout<<ans<<"\n";
	else 
	cout<<"-1\n";
}
return 0;
}


