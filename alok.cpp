#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define tc int t; cin>>t; while(t--)
#define mod 1000000007
#define endl "\n"
using namespace std;
 
void fastio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    // cout.precision(6);
}
 
int main(){
    
    tc{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		if(x> 0 and y>0 and a>b/2){
			cout<< abs(x-y)*a + min(x,y)*b<<endl;
		}else if(x<0 and y<0 and a>b/2){
			cout<< abs(x-y)*a + min(x,y)*b<<endl;
		}else {
			cout<<x*a +y*a<<endl;
		}
	}
    return 0;
}
