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
ll t;
cin>>t;
while(t--)
{
	ll n,k;
	cin>>n>>k;
	if(k>n)
	{
		cout<<"NO\n";
	}
	else if(n==k)
	{
		cout<<"YES\n";
		fi(i,0,k,1)
		cout<<1<<" ";
		cout<<"\n";
	}
	else if(!(n&1) and k&1 and k>n/2)
	{
		cout<<"NO\n";
	}
	else if(n&1 and !(k&1))
	{
		cout<<"NO\n";
	}
	else if((n&1 and k&1) or (n%2==0 and k%2==0))
	{
		cout<<"YES\n";
		fi(i,0,k-1,1)
		cout<<1<<" ";
		cout<<n-k+1;
		cout<<"\n";
	}
	else if(!(n&1) and k&1)
	{
		cout<<"YES\n";
		fi(i,0,k-1,1)
		cout<<2<<" ";
		cout<<n-2*(k-1);
		cout<<"\n";
	}
	
}
return 0;
}

