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

int main()
{
    int t=0,i=0,j=0,n=0,k=0,num=0,temp=0;
    string str,str1;
    cin>>str;
    for(i=0;i<str.length();++i)
    {
        if(str[i]=='|')
        {
            break;
        }
    }
    cin>>str1;
    n=str1.length();
    int l=i;
    int r=str.length()-i-1;
    for(i=0;i<n;++i)
    {
        if(l<=r)
        {
            str.insert(str.begin(),str1[i]);
            ++l;
        }
        else
        {
            str.pb(str1[i]);
            ++r;
        }
    }
    if(l==r)
    {
        cout<<str;
    }
    else
    {
        
        
    }
    return 0;
}


