#include<iostream>
#include<string>
#include<map>

using namespace std;
// template starts here
#define ll long long

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s;
getline(cin,s);
map<char,int> mp;
for(int i=0;i<s.size();i++)
{
    if(s[i]!= ' ' )
    {
        if(s[i] < 91)
        s[i] += 32;
        mp[s[i]]++;
        
    }
    
}
for(auto i:mp)
{
    cout<<i.first<<' '<<i.second<<"\n";
}
return 0;
}





