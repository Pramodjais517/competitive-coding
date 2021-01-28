#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl '\n'
using namespace std;
#define T ll t=0;cin>>t;for(ll test=0;test<t;test++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    T{
        ll n;
       cin>>n;
       int flag=0;
       string s="";
       char ch='9';
       while(n--){
        s+=ch;
       if(ch=='0')
       flag=1;
       else if(ch=='9')
       flag=0;
       if(flag==0)ch--;
       else if(flag==1)ch++;
       }cout<<s<<endl;

    }

    return 0;
}
