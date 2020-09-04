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
ll cnt;
void merge(ll a[],ll start,ll mid,ll end)
{
		ll n1 = mid - start + 1;
		ll n2 = end - mid;
		ll x[n1];
		ll y[n2];
		fi(i,0,n1,1)
		{
			x[i] = a[i+start];
		}
		fi(i,0,n2,1)
		{
			y[i] = a[i + (mid+1)];
		}
		ll p1 = 0,p2 = 0;
		while(p1<n1 and p2<n2)
		{
			if(x[p1]<=y[p2])
			{
				a[start] = x[p1];
				p1++;
			}
			else
			{
				a[start] = y[p2];
				p2++;
				cnt += (n1-p1);
			}
			start++;
		}
		while(p1<n1)
		{
			a[start] = x[p1];
			p1++;
			start++;
		}
		while(p2<n2)
		{
			a[start] = y[p2];
			p2++;
			start++;
		}
}

void mergesort(ll a[],ll start,ll end)
{
	if(start == end)
		return;
	ll mid = start + (end-start)/2;
	mergesort(a,start,mid);
    mergesort(a,mid+1,end);
	merge(a,start,mid,end);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
ll a[n];
fi(i,0,n,1)
{
	cin>>a[i];
}
cnt=0;
mergesort(a,0,n-1);
cout<<cnt<<'\n';
}
return 0;
}


