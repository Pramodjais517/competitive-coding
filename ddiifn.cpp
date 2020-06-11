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
ll a[n];
fi(i,0,n,1)
cin>>a[i];
ll bal = 0;
bool flag=0;
map<int,int>m;
fi(i,0,n,1)
{
	if(a[i]==25)
	m[a[i]]++;
	if(a[i]==50)
	{
		if(m[25]==0)
		{
			cout<<"NO\n";
			return 0;
		}
		else
		{
			m[25]--;
			m[50]++;
		}
	}
	if(a[i]==100)
	{
		if(m[25]==0 or( m[50]==0 and m[25]<3 ))	
		{
			cout<<"NO\n";
			return 0;
		}
		else if(m[25] and m[50])
		{
			m[25]--;
			m[50]--;
		}
		else{
			m[25]-=3;
		}
	}	
}
cout<<"YES\n";
return 0;
}

