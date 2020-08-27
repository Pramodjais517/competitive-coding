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
// template ends here

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
string s;
cin>>s;
ll a = 0 , b = 0;
ll l=0,cnt = 0 , r = n - 1;
while(s[l]=='-' and l<n)
{
	l++;
}
while(s[r]=='-' and r>=0)
{
	r--;
}
if(r>=0  and s[r]=='B')
{
	b+= (n-r-1);
}
if(l<n and s[l]=='A')
{
	a += l ;
}
bool fa = 0,fb=0;
for(ll i=l;i<=r;i++)
{
	while(s[i]=='-' and i<n){
            cnt++; i++;
    }
    if(s[i]=='A' and fb==0){
            a+=cnt+1; 
			cnt=0;
    }
    else if(s[i]=='B' and fb==1){
        b+=cnt+1; cnt=0;
    }
    else if(s[i]=='B')
	{
		b+=1;
		fb=1,cnt=0;	
	} 
    else if(s[i]=='A' and fb==1){
            a+=(cnt/2)+1;
			b+=(cnt/2);
            cnt=0; fb=0;
    }
}
if(a>b){
	cout<<"A";
}
else if(b>a)
{
	cout<<"B";
}
else
{
	cout<<"Coalition government";
}
return 0;
}


