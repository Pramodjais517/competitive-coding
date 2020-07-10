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
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
ll x3,y3,x4,y4;
if(x1!=x2 and y1!=y2 and abs(x1-x2)!=abs(y1 - y2))
{
	cout<<"-1";
	return 0;
}
if(y1 == y2)
{
	x3 = x1;
	x4 = x2;
	y3 = y1 + abs(x1-x2);
	y4 = y2 + abs(x1-x2);
	
}
else if(x1 == x2)
{
	y3 = y1;
	y4 = y2;
	x3 = x1 + abs(y1-y2);
	x4 = x2 + abs(y1-y2);
}
else if((x1 - x2) == (y1 - y2))
{
	x3 = x1;
	y3 = y2;
	x4 = x2;
	y4 = y1;
}
cout<<x3<<" "<< y3<<" "<<x4<<" "<<y4;
return 0;
}

