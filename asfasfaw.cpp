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
	char a[4][4];
	fi(i,0,4,1)
	fi(j,0,4,1)
	cin>>a[i][j];
	bool flag =0 ;
	for(int i=0;i<3 ; i++)
	{
		for(int j=0;j<3;j++)
		{
		ll hash =0,dot=0;
		if(a[i][j]=='#')
		hash++;
		else
		dot++;
		if(a[i][j+1] == '#')
		hash++;
		else
		dot++;
		if(a[i+1][j+1]=='#')
		hash++;
		else
		dot++;
		if(a[i+1][j]=='#')
		hash++;
		else
		dot++;
		if(abs(hash-dot) == 2 or (dot==4) or hash==4)
		{
		flag=1;
		break;
		}			
		}
		if(flag==1)
		break;
	}
	if(flag == 1)
	cout<<"YES\n";
	else
	cout<<"NO\n";
return 0;
}

