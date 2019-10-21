#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define rs resize
#define rsv reserve
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	vector<int> v;
	int n,temp;
	cin>>n;
	v.rsv(6);
	f(i,0,n,1)
	{
		cin>>temp;
		v.pb(temp);
	}
	sort(v.begin(),v.end(),compare);
	f(i,0,n,1)
	cout<<v[i]<<" ";
	
return 0;
}


