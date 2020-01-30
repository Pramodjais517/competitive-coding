#include<bits/stdc++.h>
using namespace std;
// template starts here
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
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here


int main()
{
 ll n;
 cin>>n;
 if(n==0)
 cout<<"O-|-OOOO";
 while(n>0)
 {
 	int d = n%10;
 	if(d>=5)
 	{
 		cout<<"-O";
 		d-=5;
	 }else
	 cout<<"O-";
	 cout<<"|";
	 for(ll i=1;i<=d;i++)
	 cout<<"O";
	 cout<<"-";
	 while((4-d)>0)
	 {
	 	cout<<"O";
	 	d++;
	 }
	 cout<<"\n";
	 n=n/10;
 }
return 0;
}

