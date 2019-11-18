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
   ll t;
   cin>>t;
   while(t--)
  {
  	ll ar[26]={0};
  	fi(i,0,26,1)
  	cin>>ar[i];
  	string s;
  	cin>>s;
  	ll count=0;
  	ll start=0;
  	ll i=1;
  	ll sum=ar[s[start]-'a'];
  	char st=s[0];
  	while(i<s.length() and start<s.length())
  	{
  		sum+=ar[s[i]-'a'];
  		if(sum==0 and s[i]==st)
  		{
  			count++;
  			start++;
  			st = s[start];
		  }
  		i++;
    }
    cout<<count<<"\n"; 
  }
return 0;
}


