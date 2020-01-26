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
void print_inc(ll n)
{
	if(n==0)
	return;
	cout<<n<<" ";
	print_inc(n-1);
}
void print_dec(ll n)
{
	if(n==0)
	return;
    print_dec(n-1);
	cout<<n<<" ";
}
int main()
{
ll n;cin>>n;
print_inc(n);
cout<<"\n";
print_dec(n);
return 0;
}

