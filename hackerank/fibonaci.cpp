#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	ll n;
	cin>>n;
	ll fib[61];    
	int a=0,b=1,temp;
	fib[1]=a;
	fib[2]=b;	
for(ll i=3;i<=60;i++)
{
	temp=b;
	b=(a+b)%10;
    fib[i]=b%10;
    a=temp;
}
ll x=2;
while(n/x!=1)
x*=2;
cout<<fib[x%60]<<"\n";
}
return 0;
}

