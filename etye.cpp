#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,a,b;
		cin>>x>>y>>a>>b;
	
		if(x > y) swap(x,y);
		cout<<min(x*b+(y-x)*a,(x+y)*a)<<endl;
	}
}
