#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	int hcf = __gcd(n,m);// a*b = gcd(a,b) * lcm(a,b);
	cout<<"GCD:"<<hcf<<"\n"<<"LCM:"<<(n*m)/hcf<<"\n";
}
return 0;
}


