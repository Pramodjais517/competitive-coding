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

bool cmp(const pair<int,int> a,const pair<int,int> b)
{
	if(a.second == b.second)
	return a.first < b.first;
	return a.second > b.second;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	map<int,int>mp;
	int val;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		mp[val]++;
	}
	vector<pair<int,int>> s;
	for(auto i = mp.begin();i!=mp.end();i++)
	{
		s.push_back({i->first,i->second});
	}
	sort(s.begin(),s.end(),cmp);
	for(auto i=s.begin();i!=s.end();i++)
	{
		while(i->second!=0)
		{
			cout<<i->first<<" ";
			i->second--;
		}
	}
	cout<<"\n";
}
return 0;
}


