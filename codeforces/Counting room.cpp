#include<bits/stdc++.h>

using namespace std;
// template starts here
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
#define mod 10000000074

char a[1001][1001];
bool vis[1001][1001];
ll n ,m;

bool valid(int i,int j)
{
    if(i<0 or i>=n or j<0 or j>=m)
    return 0;
    if(a[i][j]=='#' or vis[i][j])
    return 0;
    return 1;
}

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};



void dfs(int x,int y)
{
    vis[x][y] = 1;
    for(int i=0;i<4;i++)
    {
        if(valid(x + dx[i],y + dy[i]))
        {
            dfs(x+dx[i],y+dy[i]);
        }
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
fi(i,0,n,1)
{
    fi(j,0,m,1)
    {
        cin>>a[i][j];
    }
}
int ans = 0;
fi(i,0,n,1)
{
    fi(j,0,m,1)
    {
        if(a[i][j] == '.' and !vis[i][j])
        {
            dfs(i,j);
            ans++;
        }
    }
}
cout<<ans;

return 0;
}





