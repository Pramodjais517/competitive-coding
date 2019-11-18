#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "

int main()
{
	ll n,m;
	cin>>n>>m;
	char c;
	fi(i,0,n,1)
	{
		fi(j,0,m,1){
			cin>>c;
			if((c!='B') and (c!='W') and (c!='G'))
			{
			cout<<"#Color";
			return 0;	
			}
		}
	}
	cout<<"#Black&White";
return 0;
}


