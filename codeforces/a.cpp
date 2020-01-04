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
//ll t;
//cin>>t;
//while(t--)
//{

//}
ll a=10,b=5;
a = a^b;
b = a^b;
a = a^b;
cout<<a<<" "<<b;
return 0;
}

