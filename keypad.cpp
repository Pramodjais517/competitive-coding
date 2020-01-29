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
map<ll,string> m;
void mapping()
{
	for(int i=2;i<=9;i++)
	{
		switch(i)
		{
			case 2:
				m[i]="abc";
				break;
			case 3:
				m[i]="def";
				break;
			case 4:
				m[i]="ghi";
				break;
			case 5:
				m[i] = "jkl";
				break;
			case 6:
				m[i]="mno";
				break;
			case 7:
				m[i]="pqrs";
				break;
			case 8:
				m[i]="tuv";
				break;
			case 9:
				m[i]="wxyz";
				break;
		}
	}
}
void solve(string in, string out,ll i)
{
	if(in[i]=='\0' or i >= in.length() )
	{
		cout<<out<<"\n";
		return;
	}
	ll ind = in[i]-'0';
	string key = m[ind];
	string temp;
	for(ll k=0;k<key.length();k++)
	{
		temp = out;
		temp.pb(key[k]);
		solve(in,temp,i+1);
	}
	
}
int main()
{
string in;
cin>>in;
mapping();
string out;
solve(in,out,0);
return 0;
}

