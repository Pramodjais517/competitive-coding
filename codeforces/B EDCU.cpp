#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
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
cout.tie(NULL);
ll t; cin>>t; while(t--){ 
      string a,b;
      cin>>a>>b;
      if(a<b)
      swap(a,b);
      string s1 = a, s2=b;
      while(s1!=s2 and s1.size()<=400 and s2.size()<=400)
      {
          if(s1.size() < s2.size())
          s1+=a;
          else
          s2+=b;
      }
      if(s1.size() > 400 or s2.size() > 400)
      cout<<"-1\n";
      else
      cout<<s1<<"\n";
    
}
return 0;
}





