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
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int k;
cin>>k;
list<int> l;
for(int i=0;i<k;i++)
{
	while(!l.empty() and a[i]>= a[l.back()])
	{
		l.pop_back();
	}
	l.push_back(i);
}
for(int i=k;i<n;i++)
{
	cout<<a[l.front()]<<" ";
	//remove unneccary data
	while(!l.empty() and a[i]>= a[l.back()])
	{
		l.pop_back();
	}
	// remove i which is out of range
	while(!l.empty() and l.front() <= (i-k))
	{
		l.pop_front();
	}
	l.push_back(i);
}
cout<<a[l.front()]<<"\n";
return 0;
}


