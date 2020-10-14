#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const lli m = 1e9 + 7;
class Solution {
   public:
   lli add(lli a, lli b){
      return (a % m) + (b % m);
   }
   lli mul(lli a, lli b){
      return (a % m) * (b % m);
   }
   int uniqueLetterString(string s) {
      int n = s.size();
      int ans = 0;
      vector<int> cnt[26];
      for (int i = 0; i < n; i++) {
         char x = s[i];
         if (cnt[x - 'a'].size() == 0) {
            cnt[x - 'a'].push_back(-1);
         }
         cnt[x - 'a'].push_back(i);
      }
      for (int i = 0; i < 26; i++) {
         if (cnt[i].size() == 0)
         continue;
         cnt[i].push_back(n);
         for (int j = 1; j < cnt[i].size() - 1; j++) {
            lli temp = mul(cnt[i][j] - cnt[i][j - 1], cnt[i][j +1] - cnt[i][j]);
            ans = add(ans, temp);
         }
      }
      return ans;
   }
};
main(){
   Solution ob;
   cout << (ob.uniqueLetterString("aabb"));
}
