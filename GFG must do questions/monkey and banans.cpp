#include<bits/stdc++.h>
using namespace std;
	
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m, p , k, j;
cin>>n>>k>>j>>m>>p;
int ans = 0;
ans+= m/k;
ans+=p/j;
if(m%k!=0)
ans++;
if(p%j!=0)
ans++;
cout<<n - min(n,ans);
return 0;
}


