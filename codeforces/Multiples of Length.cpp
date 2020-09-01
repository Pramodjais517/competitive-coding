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
ll a[n];
fi(i,0,n,1)
{
	cin>>a[i];
}
cout<<"1 1\n"<<-a[0]<<"\n";
if(n==1)
{
	cout<<"1 1\n"<<0<<"\n";
	cout<<"1 1\n"<<0<<"\n";
}
else
{
	a[0] = 0;
	cout<<"2 "<<n<<'\n';
	ll da = 0;
	fi(i,1,n,1)
	{
		da = (n-1) * a[i];
		cout<<da<<" ";
		a[i] += da;
	}
	cout<<"\n";
	cout<<"1 "<<n<<"\n";
	fi(i,0,n,1)
	{
		cout<<-a[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}


