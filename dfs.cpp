
//KUNAL FARMAH
//@kunalfarmh98@gmail.com

#include<bits/stdc++.h>
using namespace std;

int minval=INT_MAX;
int dp[1001];
int minjumps(int n, int k, string s[],int i, int steps){

    if(i==n-1 && s[i][i]=='1')
        return steps;

    else if(i==n-1 && s[i][i]=='0'){
//        for(int ind=1; i<=k; i++){
//            if(s[i][i-ind]=='1'){
//                dp[i] = min(minval, minjumps(n,k,s,ind,steps+1));
//            }
//        }
        return INT_MIN;
    }

    if(dp[i]!=-1){
        return dp[i];
    }
    
    for(int jump=1; jump<=k; jump++){
        if(i+jump<n && s[i][i+jump]=='1') {
            minval = min(minval, minjumps(n, k, s, i + jump, steps+1));
        }
        // if we reach 0 on going forward, go back
        else if((i+jump==n-1 && s[i][i+jump]=='0') ||( i+jump<n && jump==k && s[i][i+jump]=='0')){
            for(int ind=1; ind<=k; ind++){
                if(s[i][i-ind]=='1')
                	//dp[i] = minjumps(n,k,s,i-ind,steps+1);
                    minval = min(minval,minjumps(n,k,s,i-ind,steps+1));
            }
        }
    }
    return dp[i]=minval;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        memset(dp,-1,sizeof(dp));
        int n,k;
        cin>>n>>k;
        string s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        minval = INT_MAX;
        int jumps = minjumps(n,k,s,0,0);
        if(jumps>0 && jumps!=INT_MAX)cout<<jumps<<endl;
        else cout<<-1<<endl;

    }



    return 0;
}
