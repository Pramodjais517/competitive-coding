#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
using namespace std;

ll power(ll a,ll n)
{
	ll res = 1;
	while(n)
	{
		if(n%2)
		  res = res*a,n--;
		else
		  a = a*a,n=n/2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin >> x >> y;
		ll a,b;
		cin >> a >> b;
		ll z = min(x,y);
		ll ans = 0;
		if(z == x)
		{
			ans = ans + z*b;
			ans = ans + (y-x)*a;
		}
		else if(z == y)
		{
			ans = ans + z*b;
			ans = ans + (x-y)*a;
		}
		if(a*(x+y) < ans)
		  ans = a*(x+y);
		cout << ans << "\n";
	}
	return 0;
}

