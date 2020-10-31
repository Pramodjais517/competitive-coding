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
int dist[101][101];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

bool isvalid(int i,int j,int n)
{
	if(i<0 or i>=n or j<0 or j>=n)
	return 0;
	return 1;
}

void dijsktra(int n)
{
	priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
	dist[0][0] = mat[0][0];
	q.push({mat[0][0],{0,0}});
	while(!q.empty())
	{
		pair<int,pair<int,int>> curr = q.top();
		q.pop();
		for(int i=0;i<n;i++)
		{
			int tempi = curr.second.first + dx[i];
			int tempj = curr.second.second + dy[i];
			if(isvalid(tempi,tempj,n))
			{
				if((curr.first + mat[tempi][tempj]) < dist[tempi][tempj])
				{
				dist[tempi][tempj] = curr.first + mat[tempi][tempj];
				q.push({dist[tempi][tempj], {tempi,tempj}});
				}
			}
		}
	}
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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
			dist[i][j] = INT_MAX;
		}
	}
	dijsktra(n);
// 	for(int i=0;i<n;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cout<<mat[i][j]<<" ";
// 		}
// 		cout<<"\n";
// 	}
	cout<<dist[n-1][n-1]<<"\n";
}
return 0;
}


