#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n+1];
memset(a,0,sizeof(a));
ll ind1 = 0,ind2 = 1;
ll l = 1,r = n;
while(l<r)
{
	cout<<"? "<<l<<" "<<r<<"\n";
	cout.flush();
	ll y;
	cin>>y;
	cout<<"? "<<r<<" "<<l<<"\n";
	cout.flush();
	ll z;
	if(y == -1 or z == -1)
	exit(0);
	cin>>z;
	if(y>z)
	a[l] = y,l++;
	else
	a[r] = z,r--;
	cout.flush();
	
}
ll tot = n*(n+1)/2;ll sum = 0;
fi(i,1,n+1,1)
sum+=a[i];
a[l] = tot - sum;
cout<<"! ";
fi(i,1,n+1,1)
cout<<a[i]<<" ";
cout<<"\n";
cout.flush();
return 0;
}


