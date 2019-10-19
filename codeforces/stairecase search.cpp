#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
int n;
cin>>n;
int ar[n][n];
f(i,0,n,1)
f(j,0,n,1)
cin>>ar[i][j];
int s;
cin>>s;
int i=0,j=n-1;
while(i<n and j<n)
{
	if(ar[i][j]==s)
	break;
	else if(ar[i][j]<s)
	i+=1;
	else if(ar[i][j]>s)
	j-=1;
}
cout<<ar[i][j];
return 0;
}


