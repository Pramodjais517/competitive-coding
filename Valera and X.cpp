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
	ll n;
	cin>>n;
	char ar[n][n];
	fi(i,0,n,1)
	fi(j,0,n,1)
	cin>>ar[i][j];
	char x = ar[0][0];
	char y = ar[0][1];
	if(x==y)
	{
		cout<<"NO";
		return 0;
	}
	fi(i,0,n,1){
		fi(j,0,n,1)
		{
			if(i==j)
			{
		    if(ar[i][i]!=x or ar[i][n-1-i]!=x)
		    {
			 cout<<"NO";
			  return 0;
		    }
		    }
		    else if(ar[i][j]!=y and i!=(n-j-1)){
			cout<<"NO";
			return 0; 
			}
     	}
	}
	cout<<"YES";
return 0;
}


