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
   char a[4][4];
   fi(i,0,4,1)
   {
   	fi(j,0,4,1)
   	{
   		cin>>a[i][j];
	   }
   }
   ll w=0,b=0;
   fi(i,0,3,1)
   {
   	fi(j,0,3,1)
   	{
   			if(a[i][j]=='#')
   			b++;
   			if(a[i][j+1]=='#')
   			b++;
   			if(a[i+1][j+1]=='#')
   			b++;
   			if(a[i+1][j]=='#')
   			b++;
   			if(a[i][j]=='.')
   			w++;
   			if(a[i][j+1]=='.')
   			w++;
   			if(a[i+1][j+1]=='.')
   			w++;
   			if(a[i+1][j]=='.')
   			w++;
			if((b==3 and w==1) or (w==3 and b==1) or (b==4) or (w==4))	
			{
				cout<<"YES\n";
				return 0;
			}
			else{
				w=0;b=0;
			}
	   }
   }
   cout<<"NO\n";
return 0;
}


