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
ll vis[10001];
ll dis[10001];
vector<ll> node[10001];

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

void dfs(ll v)
{
	vis[v] = 1;
	//dis[v] = d;
	for(auto child:node[v])
	{
		if(vis[child] == 0)
		{
			dfs(child);
		}
	}
}
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll h,b,total_vol=0;
cin>>h>>b;
ll a[n+1];
fi(i,0,n,1)
{
	cin>>a[i];
	total_vol += (h*b*a[i]);
}
a[n]=0;
stack<ll> s;
//s.push(0);
ll l_index = 0 ,ingot_vol = 0;
fi(i,1,n,1){
	while(!s.empty() && a[i] < a[s.top()]){
        l_index = a[s.top()];
        s.pop();
        ll prev = s.empty() ? -1 : s.top();
        ingot_vol = max(ingot_vol, (i - prev -1) * l_index);
    }
    s.push(i);

//	while(!s.empty() and a[s.top()] > a[i])
//	{
//		l_index = s.top();
//		s.pop();
//	}
//	if(s.empty())
//	ingot_vol = max(ingot_vol, a[l_index] * i);
//	else
//	ingot_vol = max(ingot_vol, a[l_index] * (i - s.top() - 1));
//	s.push(i);

}
cout<<total_vol << " "<<ingot_vol;
return 0;
}

