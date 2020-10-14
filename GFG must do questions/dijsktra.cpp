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

vector<pair<int,int>> v[10001];
int dis[1001];

void dijsktra(int src)
{
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
	pq.push({0,src});
	dis[src] = 0;
	// relaxation
	while(!pq.empty())
	{
		int ver = pq.top().second;
		int d = pq.top().first;
		pq.pop();
		for(auto child:v[ver])
		{
			if((d + child.second)  < dis[child.first])
			{
				dis[child.first] = d + child.second;
				pq.push({dis[child.first],child.first});		
			}			
		}
	} 
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
ll a,b,w;
for(int i=1;i<=m;i++)
{
	cin>>a>>b>>w;
	v[a].push_back({b,w});
	v[b].push_back({a,w});
}
for(int i=1;i<=n;i++)
{
	dis[i] = INT_MAX;
}
dijsktra(1);
for(int i=1;i<=n;i++)
{
	cout<<dis[i]<<" ";
}
return 0;
}


