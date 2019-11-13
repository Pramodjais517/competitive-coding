#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

int main()
{
ll n;
cin>>n;
int arr[26]={0};
string s;
cin>>s;
fi(i,0,n,1)
{
if(s[i]<=90 and s[i]>=65)
arr[s[i]-'A']++;
else
arr[s[i]-'a']++;
}
ll flag=0;
fi(i,0,26,1)
{
	if(arr[i]==0)
	{
	flag=1;break;
	}
}
if(!flag)
cout<<"YES\n";
else cout<<"NO\n";
return 0;
}


