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

ll vis[21][21];
ll n,m;
ll s[21][21];
ll dis[21][21];
map<pair<ll,ll>,string> path;
bool isvalid(ll x,ll y)
{
	if( (x < 0 or x > n) or (y < 0 or y > m))
	return false;
	if(vis[x][y])
	return false;
	return true;
}

ll a[] = {-1,0,1,0};
ll b[] = {0, 1, 0, -1};
void bfs(ll x, ll y)
{
	queue<pair<ll,ll>> q;
	vis[x][y] = 1;
	dis[x][y] = 0;
	q.push({x,y});
	while(!q.empty())
	{
		pair<ll,ll> p = q.front();
		ll curx = p.first;
		ll cury = p.second;
		q.pop();
		for(ll i=0;i<4;i++)
		{
			if(isvalid(curx + a[i], cury + b[i]))
			{
				vis[curx + a[i]][cury + b[i]] = 1;
				dis[curx + a[i]][cury + b[i]] = dis[curx][cury] + 1;
				if(i == 0)
				{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "L";	
				} 
				else if(i == 1)
				{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "U";	
				}
				else if(i == 2)
				{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "R";	
				}
				else{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "D";	
				}
				q.push({curx + a[i],cury + b[i]});
			}
		}
	}

}
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m;
ll sti= 0,stj= 0,eni= n,enj = m;
fi(i,0,n+1,1)
{
	fi(j,0,m+1,1)
	{
		vis[i][j] = 0;
		dis[i][j] = 0;
		path[{i,j}] = "";
	}
}
bfs(sti,stj);
cout<<path[{eni,enj}]<<"\n";
return 0;
}

