#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>>b[i];
	if(n==1 and a[0]>b[0])
	{
		cout<<"NO\n";
		continue;
	}
	int i=0;
	while(a[i]==b[i])
	i++;
    int z=n-1;
	while(a[z]==b[z])
	z--;
	int flag=0;
	if(i==n)
	{
		cout<<"YES\n";
		continue;
}else{
	int k=a[i]-b[i];
	if(k>=0)
	{
		cout<<"NO\n";
		continue;
	}
	for(int j=i;j<=z;j++)
	{
		if((a[j]-b[j])!=k){
			flag=1;
			break;
		}
	}
	}
	if(!flag)
	cout<<"YES\n";
	else 
	cout<<"NO\n";
 
}	
 return 0;
}
