#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed;
    cout.precision(10);
    int T;
    cin>>T;
    while(T--)
    {
       ll n; cin>>n;
       string s;cin>>s;
       stack<char> st;
       ll cnt=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='(')
           st.push(s[i]);
           else if(st.empty())
           cnt++;
           else if(st.top()=='(')
           st.pop();

       }
       if(st.size())
       cnt+=st.size();
       cout<<cnt/2<<"\n";
    }
	return 0;
}
