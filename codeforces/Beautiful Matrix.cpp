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
int ar[5][5];
f(i,0,5,1)
{
	f(j,0,5,1)
	{
	cin>>ar[i][j];
	if(ar[i][j]==1)
	{
	cout<<abs(2-i)+abs(2-j);
	break;
    }  
	}
}
return 0;
}


