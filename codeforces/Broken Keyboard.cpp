#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
   ll t;
   cin>>t;
   string s;
   string y="";
  
   while(t--)
  {
  cin>>s;
    set<char> se;
  	for(ll i=0;i<s.length();)
  	{
  		if(s[i]!=s[i+1])
  		{
  		se.insert(s[i]);i++;
    	}
    	else
    	i+=2;
	}
   itr(i,se)
   cout<<i;
   cout<<"\n";
  }
return 0;
}


