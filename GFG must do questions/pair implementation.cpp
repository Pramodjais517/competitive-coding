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

class Pair{
	int a,b;
	public:
		Pair(int a,int b)
		{
			this->a  = a;
			this->b = b;
		}
		int second()
		{
			return b;
		}
		int first()
		{
			return a;
		}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Pair p(5,6);
cout<<p.first()<<' '<<p.second();
return 0;
}


