#include <bits/stdc++.h>  
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pl pair<ll,ll>
#define vl vector<ll>

void fastio()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout<<fixed<<setprecision(10);
}

int main()
{
	fastio(); 
	ll n;
	cin>>n;
	ll a[n];
	for(ll i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	ll ans = 0;
	sort(a, a + n);
	for(ll i = 0; i < n; i++)
	{
		ans += (a[i] - 1);
	}
	ll mx = 1e7;
	for(ll i = 2; i <= mx; i++)
	{
		ll cmp = 1, temp = 0, x = 0;
		for(ll j = 0; j < n; j++)
		{
			temp += abs(a[j] - cmp);
			if(temp > ans)
			{
				x = 1;
				break;
			}
			cmp *= i;
		}
		if(!x) ans = temp;
		else break;
	}
	cout<<ans;
	return 0;
}
