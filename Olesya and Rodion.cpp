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

int main(){
	int n, t;
	scanf("%d%d", &n, &t);
	if (n == 1){
		printf("%d\n", t < 10 ? t : -1);
	}
	else{
		printf("%d", t < 10 ? t : 1);
		for (int i = 1; i < n; ++i)
			putchar('0');
		puts("");
	}
	return 0;
}

