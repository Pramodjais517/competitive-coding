#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
char c='3';
string x;
int count=0;
while(n--)
{
cin>>x;
if(x[0]==c)
{
count++;
}
c=x[1];
}
cout<<count+1;
return 0;
}


