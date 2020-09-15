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
class Count{
	public:
	 	static int cnt;
		void* operator new(size_t sz)
		{
			cnt++;
		}
		void operator delete(void* tx)
		{
			cnt--;
		}
};
int Count::cnt= 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Count* x = new Count();
delete x;
Count* y = new Count();
Count* z = new Count();
delete y;
cout<<Count::cnt<<"\n";
return 0;
}


