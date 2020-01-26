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

ll mult(ll a,ll b)
{
	if(b==1)
	return a;
	if(b==0)
	return 0;
	return a+mult(a,b-1);
}

int main()
{
ll a,b;
cin>>a>>b;
ll s = a+b;
a = max(a,b);
b = s-a;
if(b<0 and a<0)
{
	b*=-1;
	a*=-1;
	cout<<mult(a,b);	
}
else if(b<0 and a>0)
{
	b*=-1;
	cout<<-1*mult(a,b);
}
else if(b>0 and a<0){
	a*=-1;
	cout<<-1*mult(a,b);
}
else
cout<<mult(a,b);
return 0;
}

