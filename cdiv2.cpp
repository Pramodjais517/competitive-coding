#include <bits/stdc++.h>
using namespace std;

int main() { 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int res[n];
		for(int i=0;i<n;i++)
		cin>>res[i];
		int temp[n];
	    temp[0]=1;
		int count=1;
		for(int i=0;i<n;i++){
		int x=i+1;
		int k=x;
		while(x<=n){
		    if((x+k)%x == 0 && res[x-1]<res[x+k-1])
		    {
		        temp[x+k-1]=temp[x-1]+1;
		        count=max(count,temp[x+k-1]);
		    }
		    x=x+k;
		}
		}
	cout<<count<<endl;	
	}
	return 0;
}
