#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007
vector<vector<int>> ludo(31);
bool vis[31];
int dis[31];


void bfs(int src)
{
	queue<pair<int,int>> q;
	q.push({src,0});
	vis[src] = 1;
	dis[src] = 0;
	while(!q.empty())
	{
		pair<int,int> node = q.front();
		q.pop();
		int d = node.second;
		int ver = node.first;
		for(auto child:ludo[ver])
		{
			dis[child] = min(dis[child],d+1);
			if(!vis[child])
			{
			vis[child] = 1;
			q.push({child,dis[child]});
			}
		}
	}
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;cin>>t;
while(t--)
{
int n;
cin>>n;
ludo.clear();
int a,b;
map<int,int> sn,lad;
while(n--)
{
	cin>>a>>b;
	if(a > b)
	sn[a] = b;
	else
	lad[a] = b;
}
for(int i=1;i<=30;i++)
{
	dis[i] = INT_MAX;
	vis[i] = 0;
	for(int j=1;j<=6;j++)
	{
		if(i+j <=30)
		{
			if(sn[i+j])
			ludo[i+j].pb(sn[i+j]);
			else if(lad[i+j])
			ludo[i].pb(lad[i+j]);
			else
			ludo[i].pb(i+j);	
		}	
	}	
}
bfs(1);
//for(int i=1;i<=30;i++)
//{
//	cout<<i<<"-> ";
//	for(auto j:ludo[i])
//	cout<<j<<" ";
//	cout<<"\n";
//}
cout<<dis[30]<<"\n";
}

return 0;
}


