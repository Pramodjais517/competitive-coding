#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	gcd(b, a%b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<int>A(n);
	for(int i=0; i<n; i++)
		cin>>A[i];
	int res = -1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			long long curr_res = (A[i]*A[j])/gcd(A[i], A[j]);
			if(res == -1)
				res = curr_res;
			else
				res = gcd(res, curr_res);
		}
	}
	cout<<res<<endl;	
	}
	return 0;
}
