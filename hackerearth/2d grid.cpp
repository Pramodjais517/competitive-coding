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

ll vis[1001][1001];
ll n,m;
char s[1001][1001];
ll dis[1001][1001];
map<pair<ll,ll>,string> path;
bool isvalid(ll x,ll y)
{
	if( (x < 0 or x >= n) or (y < 0 or y >= m))
	return false;
	if(vis[x][y])
	return false;
	if(s[x][y] == '#')
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
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "U";	
				} 
				else if(i == 1)
				{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "R";	
				}
				else if(i == 2)
				{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "D";	
				}
				else{
					path[{curx + a[i],cury + b[i]}] = path [{curx,cury}] + "L";	
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
ll sti,stj,eni,enj;
fi(i,0,n,1)
{
	fi(j,0,m,1)
	{
		cin>>s[i][j];
		if(s[i][j] == 'A')
		{
			sti = i;
			stj = j;
		}
		if(s[i][j] == 'B')
		{
			eni = i;
			enj = j;
		}
	}
}
ll cnt = 0;
fi(i,0,n,1)
{
	fi(j,0,m,1)
	{
		vis[i][j] = 0;
	}
}
bfs(sti,stj);
if(vis[eni][enj])
{
	cout<<"YES\n";
	cout<<dis[eni][enj]<<"\n";
	cout<<path[{eni,enj}]<<"\n";
}
else
{
	cout<<"NO\n";
}
return 0;
}

