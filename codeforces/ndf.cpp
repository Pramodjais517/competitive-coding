#include<bits/stdc++.h>

using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

long long solve(int N, vector<long long> X, int K)
{
    deque<int> q(K);
    int i;
    for (i = 1; i < K; i++) {
        while ((!q.empty()) && X[i] >= X[q.back()])
        q.pop_back();  
        q.push_back(i);
    }
    long long diff = INT_MAX;
    while(i < N-1){
        diff = min(diff, X[q.front()]);
        while ((!q.empty()) && q.front() <= i - K)
            q.pop_front();
        while ((!q.empty()) && 
                X[i] >= X[q.back()])
            q.pop_back();
        q.push_back(i);
        i++;
    }
    return min(diff, X[q.front()]);
}

int findmin(int n, vector<long long> a, int k)
{
 
    // Create the difference array
    vector<ll> diff(n - 1);
    for (int i = 0; i < n - 1; i++) {
        diff[i] = a[i + 1] - a[i];
    }
 
    // find minimum of all maximum
    // of subarray sizes n - k - 1
    int answer = solve(n-1,diff,n-k-1); 
    return answer;
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin>>n;
vector<ll> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}   
int k;
cin>>k;
cout<<findmin(n,arr,k)<<"\n";
return 0;
}





