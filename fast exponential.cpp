#include<bits/stdc++.h>
using namespace std;
long long int n,i,p,q;
long long mod=1000000007;
long long power(long long a,long long b)
{
	long long  pw;
	if(b==1) return a;
	if(b==0) return 1;
	pw=power(a,b/2);
	pw=(pw*pw)%mod;
	if(b%2==0) return pw;
	else return (pw*a)%mod;
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>p>>q;
		cout<<power(p,q)<<endl;
	}
	
}
