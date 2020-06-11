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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio();
    tc{
		string s;
		cin>>s;
		int z=0,o=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='0')z++;
			else o++;
		}
		if(z==0 or o==0){
			cout<<s<<endl;
		}else if(s[0] =='1'){
			for(int i=0;i<s.length();i++)
			cout<<"10";
			cout<<endl;
		}else{
			for(int i=0;i<s.length();i++)
			cout<<"01";
			cout<<endl;
		}
	}
    return 0;
}
