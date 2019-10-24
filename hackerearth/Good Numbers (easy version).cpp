#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
bool checkpow(int n)
{
	if(n==1 or n==0)
	return 1;
	else if(n==2)
	return 0;
	else if(n==3)
	return 1;
	int i=0;
	while(pow(3,i)<n)
		i++;
	return checkpow(n-pow(3,i));
	
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
  {
int n;
cin>>n;
for(int i=n;;i++)
{
	if(checkpow(n))
	{
	cout<<i<<"\n";
	break;	
	}
}
  }
return 0;
}


