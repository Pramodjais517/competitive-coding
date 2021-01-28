#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
//#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 10000000074

char a[1001][1001];
bool vis[1001][1001];
ll n ,m;
string path;
map<pair<int,int>,char> mp;


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
char dr[] = {'R','D','L','U'}; 

void bfs(int x,int y)
{
    queue<pair<int,int>> q;
    vis[x][y] = 1;
    q.push({x,y});
    while(!q.empty())
    {
        pair<int,int> point = q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int cx =  point.F + dx[i];
            int cy = point.S + dy[i];
            if(valid(cx,cy))
            {
                vis[cx][cy] = 1;
                q.push({cx, cy});
                mp[{cx,cy}] = dr[i];
                if(a[cx][cy] == 'B')
                return;
            }
        }
    }
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
int si = 0,sj =0;
int ei = 0,ej = 0;
fi(i,0,n,1)
{
    fi(j,0,m,1)
    {
        cin>>a[i][j];
        if(a[i][j] == 'A')
        si = i,sj = j;
        if(a[i][j] == 'B')
        ei = i,ej = j;
    }
}
bfs(si,sj);
if(!vis[ei][ej])
cout<<"NO";
else
{
    cout<<"YES\n";
    while(ei>=0 and ej>=0 and ei<n and ej<m)
    {
        if(a[ei][ej] == 'A')
        break;
        path.pb(mp[{ei,ej}]);
        if(mp[{ei,ej}] == 'L')
        {
            ej+=1;
        }
        else if(mp[{ei,ej}] == 'R')
        {
            ej-=1;
        }
        else if(mp[{ei,ej}] == 'U')
        {
            ei+=1;
        }
        else if(mp[{ei,ej}]=='D')
        {
            ei-=1;
        }
        
    }
    reverse(path.begin(),path.end());
    cout<<path.size()<<"\n";
    cout<<path;
}

return 0;
}





