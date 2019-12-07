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

void subseq(string s,ll n){
	int i=0;
	while(n)
	{
		(n&1)?cout<<s[i]:cout<<"";
		n =n>>1;
		i++;
	}
	cout<<"\n";
}

int main()
{
   string s;cin>>s;
   ll range = 1<<s.length();
   fi(i,1,range,1)
   {
   	subseq(s,i);
   }
return 0;
}


