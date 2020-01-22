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


int main()
{
ll t;
cin>>t;
while(t--)
{
 ll n,k;
 cin>>n>>k;
 int a[n];
 int sm=0,lg=n-1;
 int i=0,flag=1;
 while(i<n and sm<n and lg>=0)
 {
 	if(flag)
 	{
 	a[i] = lg--;
	flag=0;	
	}
	else{
	   a[i] = sm++; flag=1;
	 }
	 i++;	
 }
 fi(i,0,n,1)
 {
 	if(a[i]==k)
 	cout<<i<<"\n";
 }
}
return 0;
}

