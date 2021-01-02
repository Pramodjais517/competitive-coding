#include<bits/stdc++.h>
using namespace std;
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
#define mod 1000000007

class comp
{
	public:
	bool operator()(int a,int b)
	{
	return a > b;
	}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ll t;
//cin>>t;
//while(t--)
//{
//}
priority_queue<int,vector<int>,comp> q; 

q.push(1);
q.push(4);
q.push(0);
q.push(5);
q.push(2);
while(!q.empty())
{
	cout<<q.top()<<" ";
	q.pop();
}
return 0;
}


