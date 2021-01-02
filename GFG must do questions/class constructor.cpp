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
class car{
	string name;
	string model;
	
	public:
		car(string s)
		{
			name = s;
		}
		car(car &obj)
		{
			name = "copied " + obj.name;
		}
		void getName()
		{
			cout<<name<<"\n";
		}
		int add(int a,int b)
		{
			cout<<a+b<<'\n';
		}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
car a("hello");
a.getName();
car b(a);
b.getName();
return 0;
}


