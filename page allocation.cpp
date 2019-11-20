#include<bits/stdc++.h>
using namespace std;
bool isvalid(int arr[], int n, int m, int mid)
{
    int st = 1;
    int pg = 0;
    for(int i=0; i<n; i++){
        if (pg + arr[i] > mid){
            pg = arr[i];
            st++;
            if(st > m){
                return false;
            }
        }
        else{
            pg += arr[i];
        }
    }
    return true;
}
int allocate(int arr[], int n, int m)
{   
    int e=0,s=0;
    for(int i=0; i<n; i++){
        e+=arr[i];
        s=max(s,arr[i]);
    }
    int fans = s ;
    while(s <= e)
    {
        int mid = (s+e)/2;
       
        if(isvalid(arr,n,m,mid)){
            fans = mid;
            e = mid - 1;
        } 
        else{
            s = mid + 1;
        } 
    }
    return fans;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<allocate(arr,n,m)<<endl;
    }
	return 0;
}
