// C++ program to place tiles 
#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int c,p; cin>>c>>p;
	int ar[p];
	
	for(int i=0;i<p;i++){
		cin>>ar[i];
	}
	
	int res=9999;
	for(int i=0;i<=(p-c);i++){
		sort(ar+i,ar+i+c);
		res= min(res,ar[i+c-1] - ar[i]);
	}
	cout<<res<<endl;
}
