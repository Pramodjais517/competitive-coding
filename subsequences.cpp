#include<bits/stdc++.h>
using namespace std;
// template starts here
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
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here
void subseq(char *s,char *out,int i, int j)
{
	if(s[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<"\n";
		return;
	}
	subseq(s,out, i+1,j);
	out[j] = s[i];
	subseq(s,out, i+1,j+1);
}

int main()
{
char s[100];
cin>>s;
char out[100];
subseq(s,out,0,0);
return 0;
}

