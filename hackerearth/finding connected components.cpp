#include<bits/stdc++.h>
using namespace std;
// template starts here
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

ll N = 1000000;
vector<bool> prime(N+1,true);
ll vis[1001][1001];
ll a[1001][1001];
ll n,m;
vector<ll> node[100001];
// template ends here
ll dx[] = {-1,0,1,0};
ll dy[] = {0,1,0,-1};
bool isvalid(ll x, ll y)
{
	if(x<0 or x>=n or y<0 or y >=m)
	return false;
	if(vis[x][y])
	return false;
	if(a[x][y] == 0)
	return false;
	return true;
}

void dfs(ll x,ll y)
{
	vis[x][y] = 1;
	fi(i,0,4,1)
	{
		if(isvalid(x+dx[i], y + dy[i]))
		{
			dfs(x + dx[i], y + dy[i]);
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m;
fi(i,0,n,1)
{
	fi(j,0,m,1)
	{
		cin>>a[i][j];
		vis[i][j] = 0;
	}
}
ll cnt = 0;
fi(i,0,n,1)
{
	fi(j,0,m,1)
	{
		if(!vis[i][j] and a[i][j] == 1)
		{
			dfs(i,j);
			cnt++;
		}
	}
}
cout<<cnt<<"\n";
return 0;
}

