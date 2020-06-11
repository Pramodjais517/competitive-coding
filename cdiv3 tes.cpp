#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define db double
#define ldb long double
#define vi vector<int>
#define vull vector<ull>
#define vll vector<ll>
#define ump unordered_map
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n-1;i>=0;i--)
#define repa(i,a,b) for(int i=a;i <= b;i++)
#define test int t;cin>>t;while(t--)
#define si set<int>
#define sll set<ll>
#define ins insert
#define vpp vector<pair<int,int>>
#define mp make_pair
#define pll pair<ll,ll>
#define ft first
#define sc second
#define mod 1000000007
#define pii pair<int,int>
#define pi 3.141592653589793238
#define pq priority_queue
using namespace std;

int main(){
	//	freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	test{
	int n;
	cin>>n;
	int a[n];
	int odd=0,even=0;
	rep(i,n){
		cin>>a[i];
		if(a[i]&1) odd++;
		else even++;
	}
	if(even%2==0 and odd%2==0){
		cout<<"YES\n";
	}else{
		int f=0;
		rep(i,n){
			rep(j,n){
				if(abs(a[i]-a[j])==1 and i!=j){
					f=1;break;
				}
			}
			if(f==1)break;
		}
		if(f)cout<<"YES\n";
		
		else cout<<"NO\n";
	}
	}
	return 0;
}
