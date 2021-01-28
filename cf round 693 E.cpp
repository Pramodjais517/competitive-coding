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
#define mod 1000000007

bool cmp(const pair<pair<ll,ll>,ll> a, const pair<pair<ll,ll>,ll> b)
{
	if(a.first.first < b.first.first)
	return true;
	else if(a.first.first > b.first.first)
	return false;
	else
	return a.first.second > b.first.second;
	
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t; cin>>t; while(t--)
{
   ll n;
   cin>>n;
   vector<pair<pair<ll,ll>,ll>> arr;
   ll h,w;
   for(int i=0;i<n;i++)
   {
   	cin>>h>>w;
   	arr.pb({{w,h},i});
   	arr.pb({{h,w},i});
   }
   sort(arr.begin(),arr.end(),cmp);
   ll minh = INT_MAX;
   ll el = -1;
   vector<ll> ans(n,-1);
   for(auto i:arr)
   {
       ll h = i.F.S;
       ll id = i.S;
       if(h > minh)
       {
           ans[id] = el;
       }
       else if(h < minh)
       {
           minh = h;
           el = id+1;
       }
   }
   for(auto i: ans)
   cout<<i<<" ";
   cout<<"\n";
}
return 0;
}





