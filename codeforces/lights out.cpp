#include<bits/stdc++.h>
using namespace std;
// template starts here
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

ll N = 1000000;
vector<bool> prime(N+1,true);

void sieve()
{
	prime[0] = false,prime[1] = false;
	for(ll i=2;i*i <= N;i++)
	{
		if(prime[i])
		{
			for(ll j = i*i; j<= N ;j+=i)
			prime[j] = false;
		}
	}
}

ll pow(ll a, ll b)
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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
ll in[3][3];
fi(i,0,3,1)
{
	fi(j,0,3,1)
	{
		cin>>in[i][j];
	}
}
fi(i,0,3,1)
{
	fi(j,0,3,1)
	{
			if(in[i][j]%2!=0)
			{
				a[i][j]=!a[i][j];
				if((i+1)<3)
				a[i+1][j]= !a[i+1][j];
				if((i-1)>=0)
				a[i-1][j]= !a[i-1][j];
				if((j+1)<3)
				a[i][j+1]=!a[i][j+1];
				if((j-1)>=0)
				a[i][j-1]=!a[i][j-1];
			}
	}
}
fi(i,0,3,1)
{
	fi(j,0,3,1)
	cout<<a[i][j];
	cout<<"\n";
}
return 0;
}

