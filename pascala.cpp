#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mem(a,init) memset(a,init,sizeof(a))

int main()
{
ll a[101][101];
ll n,m;
a[1][0]=1;
a[1][1]=1;
for(int i=2;i<=100;i++)
{
	a[i][0]=1;
	a[i][i]=1;
	for (int j = 1; j < i; j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
}
while(cin>>n>>m, n||m)
{
		printf("%d things taken %d at a time is %lld exactly.\n", n, m,
				a[n][m]);
	
}
return 0;
}

