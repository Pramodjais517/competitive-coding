#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
int findways(int n)
{
	if(n<=1)
	return 1;
	else
	return findways(n-1)+findways(n-2);
}
int main()
{
int n;cin>>n;
cout<<findways(n); 
return 0;
}


