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
	ll n,q;cin>>n>>q;
	ll a[n+1];
	fie(i,1,n,1)
	cin>>a[i];
	ll x,val;
	ll ans = 1,sub = INT_MIN;
	fie(i,1,n-1,1)
	{
		if(a[i]==a[i+1])
		continue;
		else
		ans++;
	}
	sub = max(sub,ans);
	while(q--)
	{
		cin>>x>>val;
		if(val==a[x])
		{
			cout<<sub<<"\n";
			continue;
		}
		if(x==1)
		{
			if(a[x]==a[x+1])
			{
				if(val!=a[x])
				sub++;
			}
			else
			{
			if(val==a[x+1])
			sub--;
			}	
		}
		else if(x==n)
		{
			if(a[x-1] == a[x])
			{
				if(val!=a[x])
				sub++;
			}
			else
			{
				if(val==a[x-1])
				sub--;
			}
		}
		else
		{
			if(a[x-1] == a[x])
			{
				if(val!= a[x-1] and val!=a[x+1])
				{
					sub+=1;
				}
			}
			else if(a[x] == a[x+1])
			{
				if(val!=a[x-1] and val!=a[x-1])
				sub+=1;
			}
			else
			{
				if(val==a[x-1] or val == a[x+1])
				sub-=1;
			}
		}
		a[x] = val;
		cout<<sub<<"\n";
	}
}
return 0;
}


