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
   string s1="",s2="";
   string a;
   if(n==1)
   cout<<"true";
   else{
   fie(i,1,n/2,1){ cin>>a; s1+=a;
   }
  fie(i,1,n/2,1){ cin>>a; s2+=a;
   }
    for (int i = 0; i < s1.length()/2; i++) 
        swap(s1[i], s1[s1.length() - i - 1]);
  if(s1==s2)
  cout<<"true";
  else cout<<"false";
   }
return 0;
}

 
