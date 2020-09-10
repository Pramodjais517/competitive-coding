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
ll t;
cin>>t;
while(t--)
{
	ll n,k;
	cin>>n>>k;
	char s[n+1];
	fi(i,1,n+1,1)
	cin>>s[i];
	ll q[n+1],o[n+1],z[n+1];
	memset(q,0,sizeof(q));
	memset(o,0,sizeof(o));
	memset(z,0,sizeof(z));
	fi(i,1,n+1,1)
	{
		if(s[i] == '?')
		q[i] = 1;
		else if(s[i] == '0')
		z[i] = 1;
		else 
		o[i] = 1;
		q[i]+=q[i-1];
		z[i]+=z[i-1];
		o[i]+=o[i-1];
	}
	ll i=1,f=0;
	while(i<= (n - k + 1))
	{
		ll nz = z[i-1] - z[i+k-1];
		ll no = o[i-1] - o[i+k-1];
		ll nq = q[i-1] - q[i+k-1];
		if(no == nz)
		{
			if(nq%2 !=0)
			{
				f = 1;
				break;
			}
		}
		else
		{
			if(abs(no-nz) != nq)
			{
				f = 1;
				break;
			}
		}
		i++;
	}
	if(f)
	cout<<"No\n";
	else
	cout<<"Yes\n";
}
return 0;
}


