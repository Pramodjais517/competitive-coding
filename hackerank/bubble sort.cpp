#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
ll a[n];
f(i,0,n,1)
cin>>a[i];
ll count=0;
f(i,0,n-1,1)
{
	f(j,0,n-i-1,1)
	{
		if(a[j]>a[j+1])
		{
		count++;
		swap(a[j+1],a[j]);
    }
}
}
cout<<count<<" ";
return 0;
}


