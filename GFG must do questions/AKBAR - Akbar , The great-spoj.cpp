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
	#define mx 1000001
	vector<ll> ad[mx];
	bool vis[mx];
	ll mark[mx];
	
	void bfs(ll node,ll stn)
	{
		memset(vis, 0, sizeof(vis)); 
		queue<ll> q;
		mark[node]+=1;
		vis[node] = 1;
		q.push(node);
		while(!q.empty() and stn> 0)
		{
			ll curr = q.front();
			q.pop();
			for(auto child:ad[curr])
			{
				if(!vis[child])	
				{
					mark[child] += 1;
					vis[child] = 1;
					q.push(child);
				}
			}
			stn--;
			if(stn<=0)
			return;
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
		ll n,r,m,a,b;
		cin>>n>>r>>m;
		for(ll i=1;i<=mx;i++)
		{
			ad[i].clear();
			mark[i] = 0;
		}
		for(ll i=0;i<r;i++)
		{
			cin>>a>>b;
			ad[a].pb(b);
			ad[b].pb(a);
		}
		ll sol_city ,stn;
		bool f = 0;
		for(ll i=0;i<m;i++)
		{
			cin>>sol_city>>stn;
			bfs(sol_city,stn);
			for(ll i=1;i<=n;i++)
			{
				if(mark[i]>1)
				{
					f=1;
					break;
				}
			}
		}
		if(f or m==0)
		cout<<"No\n";
		else
		cout<<"Yes\n";
	}
	return 0;
	}
	

