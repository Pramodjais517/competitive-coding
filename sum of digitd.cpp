#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(ll i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
ll sumofdigit(ll n)
{
	ll sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
//ll t;
//cin>>t;
//while(t--)
//{

//}
string n;
cin>>n;
ll l=n.length();
if(l==1)
{
cout<<"0\n";
return 0;
}
ll sum=0, count=1;
fi(i,0,l,1)
{
	sum+= n[i]-'0';
}
while(sum>=10)
{
	sum = sumofdigit(sum);
	count++;
}
cout<<count;
return 0;
}

