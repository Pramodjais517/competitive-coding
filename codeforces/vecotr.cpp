#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
vector<int> arr;
arr.pb(100);
arr.pb(200);
arr.pb(300);
arr.pb(400);
vector<int> ar = vector<int>(++arr.begin(),arr.end());
itr(i,ar)
cout<<i<<" ";
return 0;
}


