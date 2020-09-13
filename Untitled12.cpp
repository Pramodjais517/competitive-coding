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
string s;
cin>>s;
ll i=0,A=0,B = 0,cnt=0;
bool fb = 0;
while(i<n)
{
	while(s[i] == '-' and i<n)
	{
		cnt++,i++;
	}
	if(i>=n)
	{
		break;
	}
	if(s[i]=='A' and fb==0)
	{
		A+=cnt+1,cnt=0;
	}
	else if(s[i]=='A' and fb==1)
	{
		A+=(cnt/2) + 1;
		B+=cnt/2;
		fb=0,cnt=0;
	}
	else if(s[i]=='B' and fb==0)
	{
		B+=1;cnt=0,fb=1;
	}
	else
	{
		B+=(cnt+1);
		cnt = 0,fb=1;
	}
	i++;
}
if(fb)
B+=cnt;
cout<<A<<" "<<B<<"\n";
if(A>B)
cout<<"A\n";
else if(A < B)
cout<<"B\n";
else
cout<<"Coalition government\n";
return 0;
}


