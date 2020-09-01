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
cin>>a[i];
sort(a,a+n);
ll ans = 0;
fi(i,0,n,1)
{
	ans += (a[i] - 1);
}
fie(i,2,1e7,1)
{
	ll p = 1, tmp = 0;
	bool f = 0;
	fi(j,0,n,1)
	{
		tmp += abs(a[j] - p);
		if(tmp > ans)
		{
			f = 1;
			break;
		}
		p *= i;
	}
	if(!f)
	ans = tmp;
	else
	break;
}
cout<<ans<<"\n";
return 0;
}

