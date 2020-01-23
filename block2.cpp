#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
using namespace std;
vector<int> v;
 
bool solve(string s, char c)
{
    int n = s.size();
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] != c)
        {
            s[i] = c;
            s[i + 1] == 'B' ? s[i + 1] = 'W' : s[i + 1] = 'B';
            v.pb(i + 1);
        }
    if(s[n - 1] == c)
    return true;
    else 
    return false;
}
 
 
int main() {
    int n; cin >> n;
    string s; cin >> s;
 
    int B = 0, W = 0;
    for(int i = 0; i < n; i++)
    s[i] == 'B' ? B++ : W++;
 
    if(B & 1 and W & 1)
    cout << -1, exit(0);
 
    bool sol = solve(s, 'B');
    if(!sol)
    {
        v.clear();
        solve(s, 'W');
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
 
 
    return 0;
}
