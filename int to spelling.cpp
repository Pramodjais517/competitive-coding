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
map<int,string> m;

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

void mapping()
{
	for(int i=0;i<10;i++)
	switch(i)
	{
		case 0:
			m[i]="zero";
			break;
		case 1:
			m[i]="one";
			break;
		case 2:
			m[i] = "two";
			break;
		case 3:
			m[i]="three";
			break;
		case 4:
			m[i]="four";
			break;
		case 5:
			m[i]="five";
			break;
		case 6:
			m[i]="six";
			break;
		case 7:
			m[i]="seven";
			break;
		case 8:
			m[i]="eight";
			break;
		case 9:
			m[i] ="nine";
			break;
	}
}
void solve(ll n)
{
   if(n<=0)
   return;
   solve(n/10);
   cout<<m[n%10]<<" ";
}
int main()
{
int n;
cin>>n;
mapping();
solve(n);
return 0;
}

