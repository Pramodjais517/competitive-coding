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
ll n;
cin>>n;
ll ar[n];
f(i,0,n,1)
cin>>ar[i];
ll t;
cin>>t;
ll a,b,c;
sort(ar,ar+n);
f(i,0,n,1)
{
	f(j,i+1,n,1)
	{
		f(k,j+1,n,1)
		{
			if(ar[i]+ar[j]+ar[k]==t)
			cout<<ar[i]<<", "<<ar[j]<<" and "<<ar[k]<<"\n";
		}
	}
}
return 0;
}


