#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
ll nn=0;
int last;
int i=0;
while(n>0)
{
	last=n%10;
	
	n=n/10;
	if(n==0 and last==9)
	nn=last*pow(10,i)+nn;
	else
	nn=min(last,9-last)*pow(10,i)+nn;
	i++;
}
cout<<nn;
return 0;
}


