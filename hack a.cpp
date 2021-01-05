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
    cin >> T;
    while(T--)
    {
       ll n; cin>>n;
       ll one=0,two=0;

       for(ll i=0;i<n;i++)
       {
           ll temp;cin>>temp;
           if(temp==1)
           one++;
           else
           two++;
       }
       if(one%2==0 && two%2==0)
       cout<<"YES"<<"\n";
       else if(one%2!=0)
       {
         cout<<"NO"<<"\n";

       }
       else if(one>=2)
       {
          cout<<"YES"<<"\n";

       }
       else
       cout<<"NO"<<"\n";

    }
	return 0;
}
