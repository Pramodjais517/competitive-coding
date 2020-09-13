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
vector<ll> node[10001];
bool vis[10001];
ll in[10001];

void toposort(int n)
{
	queue<ll> q;
	vector<ll> ans;
	fi(i,1,n+1,1)
	{
		if(in[i] == 0)
		q.push(i);
	}
	while(!q.empty())
	{
		ll curr = q.front();
		ans.pb(curr);
		q.pop();
		for(auto child:node[curr])
		{
			in[child]--;
			if(in[child]==0)
			q.push(child);	
		}		
	}
	for(auto i: ans)
	cout<<i<<" ";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
fi(i,0,m,1)
{
	ll a,b;
	cin>>a>>b;
	node[a].pb(b);
	in[b]++;
}
toposort(n);
return 0;
}


