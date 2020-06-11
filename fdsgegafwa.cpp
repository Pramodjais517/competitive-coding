#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int32_t main(){
    FAST
    int t=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string a;
        string b;
        cin>>a>>b;

        vector<int> freq_in_a(26,0),freq_in_b(26,0);

        for(auto i : a) freq_in_a[i-'a']++;
        for(auto i : b) freq_in_b[i-'a']++;

        bool ok=true;
        for(int i=0;i<26;i++){
            if(freq_in_a[i]==0&&freq_in_b[i]!=0) ok=false;
        }

        for(int i=0;i<n;i++){
            if(b[i]>a[i]) ok=false;
        }

        if(!ok){
            cout<<-1<<"\n";
            continue;
        }

        char i='a'-1;
        for(auto p : freq_in_a){
            i=i+1;
            if(p==0) continue;
            vector<int> itr;
            int flag=0;
            for(int j=0;j<a.size();j++){
                if(a[j]==i){
                    itr.push_back(j);
                }
                else if(b[j]==i){
                    flag=1;
                    itr.push_back(j);
                    a[j]=i;
                }
            }
            if(flag==0) continue;
            cout<<itr.size()<<" ";
            for(auto k : itr) cout<<k<<" ";cout<<"\n";
        }


    }

    return 0;
}
