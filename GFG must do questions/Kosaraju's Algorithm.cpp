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

vector<int> node[100001];
vector<int> tr[100001];
int vis[100001];
vector<int> order;

void dfs(int src)
{
	vis[src] = 1;
	for(auto child:node[src])
	{
		if(!vis[child])
		{
			dfs(child);
		}
	}
	order.pb(src);
}

void dfs1(int src)
{
	vis[src] = 1;
	for(auto child:tr[src])
	{
		if(!vis[child])
		{
			dfs1(child);
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
	int n,m;
	cin>>n>>m;
	order.clear();
	fi(i,0,n,1)
	{
		vis[i] = 0;
		node[i].clear();
		tr[i].clear();
	}
	int a,b;
	fi(i,0,m,1)
	{
		cin>>a>>b;
		node[a].pb(b);
		tr[b].pb(a);
	}
	int count = 0;
	fi(i,0,n,1)
	{
		if(!vis[i])
		{
			dfs(i);
		}
	}
	fi(i,0,n,1)
	{
		vis[i] = 0;	
	}
	fde(i,n-1,0,1)
	{
		if(!vis[order[i]])
		{
			dfs1(order[i]);
			count++;
		}
	}
	cout<<count<<"\n";
}
return 0;
}


