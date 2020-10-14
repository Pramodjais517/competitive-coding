#include<bits/stdc++.h>
using namespace std;
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

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ll t;
//cin>>t;
//while(t--)
//{
//}
stack<int> s1,s2;
s1.push(1);
s1.push(2);
s1.push(3);
s2.push(4);
s2.push(5);
s2.push(6);
swap(s1,s2);
swap(s1,s2);
while(!s1.empty())
{
	cout<<s1.top()<<" ";
	s1.pop();
}
return 0;
}


