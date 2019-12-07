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

void ithbit(int a,int n)
{
	// returns the ith bit of the number
	int val = a & (1<<2);
   (val!=0)?cout<<1:cout<<0;
}
void setithbit(int a, int n)
{
	int val = a | (1<<n);
	cout<<val;
} 

void clearithbit(int a,int n)
{
	int val = a & ~(1<<n);
	cout<<val;
}
int main()
{
   int a=13;
   ithbit(a,2);  // tells wether the ith bit is set or not
   setithbit(a,1);  // it sets the ith bit of the number if it is not set
   clearithbit(a,2);
return 0;
}


