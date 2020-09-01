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

ll vis[8][8];
ll dis[8][8];
ll dx[] = {-2,-1,1,2,2,1,-1,-2};
ll dy[] = {1,2,2,1,-1,-2,-2,-1};

bool isvalid(int x, int y)
{
	if(x<0 or x >=8 or y<0 or y>=8)
	return false;
	if(vis[x][y])
	return false;
	return true;
}
void bfs(int x,int y)
{
	queue<pair<int,int>> q;
	q.push({x,y});
	vis[x][y]= 1;
	dis[x][y] = 0;
	while(!q.empty())
	{
		pair<int,int> cur = q.front();
		ll curx = cur.first;
		ll cury = cur.second;
		q.pop();
		for(int i=0;i<8;i++)
		{
			if(isvalid(curx + dx[i],cury + dy[i]))
			{
				dis[curx + dx[i]][cury + dy[i]] = dis[curx][cury] + 1;
				vis[curx + dx[i]][cury + dy[i]] = 1;
				q.push({curx + dx[i],cury + dy[i]});
			}
		}
	}
}
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	string a,b;
	fi(i,0,8,1)
	{
		fi(j,0,8,1)
		{
			vis[i][j] = 0;
			dis[i][j] = 0;
		}
	}
	int initx,inity,tarx,tary;
	cin>>a>>b;
	initx = a[0] - 'a';
	inity = a[1] - '1';
	tarx = b[0] - 'a';
	tary = b[1] - '1';
//	cout<<initx<<" "<<inity<<"\n";
//	cout<<tarx<<" "<<tary<<"\n";
	bfs(initx,inity);
    cout<<dis[tarx][tary]<<"\n";
}
return 0;
}

