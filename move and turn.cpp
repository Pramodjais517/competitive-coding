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

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
//set<pair<int,int>> ans;
queue<pair<pair<int,int>,char>> q1,q2;

ans.insert({1,0});
ans.insert({0,1});
ans.insert({-1,0});
ans.insert({0,-1});
q1.push({{1,0},'R'});
q1.push({{0,1},'U'});
q1.push({{-1,0},'L'});
q1.push({{0,-1},'D'});

while(n--)
{
	while(!q1.empty())
	{
		pair<pair<int,int>,char> temp = q1.front();
		q1.pop();
		if(temp.second == 'R' or temp.second == 'L')
		{
			q2.push({{temp.first.first,temp.first.second + 1},'U'});
			q2.push({{temp.first.first,temp.first.second - 1},'D'});
		}
		else
		{
			q2.push({{temp.first.first + 1,temp.first.second},'R'});
			q2.push({{temp.first.first - 1,temp.first.second},'L'});	
		}
	}
	swap(q1,q2);
}
set<pair<int,int>> ans;
while(!q1.empty())
{
	pair<pair<int,int>,char> temp = q1.front();
	ans.push(temp.first);
	q1.pop();
}
cout<<ans.size()<<"\n";
return 0;
}


