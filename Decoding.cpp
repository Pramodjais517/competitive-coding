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
//ll t;
//cin>>t;
//while(t--)
//{

//}
ll n;
cin>>n;
string s;
cin>>s;
string ans="";
int flag=0;
if(n&1)
{
	flag=0;
	ans=s[0];
fi(i,1,n,1)
{
  if(!flag)
  {
  	ans = s[i]+ans;
  	flag=1;
	  }	
	  else{
	  	ans = ans+s[i];flag=0;
	  }
}
}
else{
	flag=0;
	ans = s[0];
	fi(i,1,n,1)
    {  
	if(!flag)
	{
	  ans = ans + s[i];
	  flag=1;	
	}else{
		ans = s[i]+ans;
		flag=0;
	}
    }
}
cout<<ans;
return 0;
}

