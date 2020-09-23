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
	string a;
	cin>>a;
	vector<pair<int,bool>> ind;
	ll i=0,f =0	,one_count = 0;
	while(i<n)
	{
		int cnt = 0;
		if(a[i]=='0')
		{
			cnt = 0;
			if(i==0)
			f = 1;
			while(i < n and a[i]=='0')
			i++,cnt++;
		}
		if(cnt!=0)
		{
			if((f==1 or i>=n))
			{
				ind.pb({cnt,true});
				f = 0;
			}
			else{
				ind.pb({cnt,false});
			}
		}
		if(i<n and a[i]=='1')
		one_count++;
		i++;
	}
	sort(ind.rbegin(),ind.rend());
	int ans = 0;
	if(one_count == 0)
	{
		cout<<"0\n";
		continue;
	}
	if(k==1)
	{
	for(auto i: ind)
	{
		if(i.second)
		{
			k-=1,ans+=i.first;break;	
		}
	}	
	}
	else
	for(auto i: ind)
	{
		if(k<=0)
		break;
		if(!i.second and k>1)
		{
			k-=2,ans+=i.first;
		}
		else
		{
			if(i.second)
			k-=1,ans+=i.first;
		}
	}
	cout<<n - ans - one_count<<"\n";
}
return 0;
}


