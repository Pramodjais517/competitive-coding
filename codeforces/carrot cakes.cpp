#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
	ll n,k,t,d;
	cin>>n>>t>>k>>d;
	if (((d / t) + 1) * k >= n) 
	cout << "NO" << endl;
    else 
	cout << "YES" << endl;
return 0;
}


