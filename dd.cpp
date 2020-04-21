
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k ; cin >> n >> k;
        long long arr[n], mi = 0, ma = INT_MAX;
        for(int i = 0 ; i < n ; i ++) cin >> arr[i];
        map<long long, long long> m;
        for(int i = 0 ; i < n / 2; i ++){
            m[arr[i] + arr[n - i - 1]] ++;
            mi = max(mi, 1 + min(arr[i], arr[n - i - 1]));
            ma = min(ma, k + max(arr[i], arr[n - 1-  i]));
        }
        long long cnt = 0, sm = mi;
        for(int i = ma ; i >= mi ; i --){
            if(cnt < m[i]){
                cnt = m[i];
                sm = i;
            }
        }
        long long ans = 0;
        for(int i = 0 ; i < n / 2 ; i ++){
            if((arr[i] + arr[n - i - 1]) != sm) ans ++;
        }
        cout << ans << endl;
    }
}
