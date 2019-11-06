#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n,m;
cin>>n>>m;
ll arr[n][m];
f(i,0,n,1)
f(j,0,m,1)
cin>>arr[i][j];

ll s;
cin>>s;
int flag=0;
ll i=0,j=m-1;
while(i<n and j<m and i>=0 and j>=0)
{
	if(arr[i][j]==s) {cout<<"1";flag=1; break;}
	else if(arr[i][j]>s) j--;
	else i++;
}
if(!flag)
cout<<"0";
return 0;
}


