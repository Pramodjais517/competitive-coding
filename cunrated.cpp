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
	
	
	int main()
	{
	ll t;
	cin>>t;
	while(t--)
	{
		int ans = 0;
		string s;
 		cin >> s;
  		int x = 0 , y = 0;
 		map<pair<pair<int,int>,pair<int,int>>,int> m;
 		fi(i,0,s.length(),1) {
     	 int x1 = x , y1 = y;
      	 if(s[i] == 'N') y++;
        if(s[i] == 'S') y--;
        if(s[i] == 'W') x--;
        if(s[i] == 'E') x++;
        if(m[{{x1,y1} , {x,y}}] ==0) ans+= 5;
        else  ans++;
        m[{{x,y} , {x1,y1}}] = m[{{x1,y1} , {x,y}}] = 1;
  }
  cout << ans << "\n";
	}
	return 0;
	}

