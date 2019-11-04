#include <bits/stdc++.h>
#define MAX 500
#define ll long long
using namespace std;

int multiply(int arr[],int x,int size)
{
	ll prod; int carry=0;
	for(int i=0;i<size;i++)
	{
		prod=arr[i]*x+carry;
		arr[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		
		arr[size]=carry%10;
		carry=carry/10;
		size++;
	}
	return size;
}
void factorial(int n)
{
	int arr[MAX];
	arr[0]=1;
	int size=1;
	for(int x=2;x<=n;x++)
	{
		size=multiply(arr,x,size);
	}
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	factorial(n);
	cout<<"\n";
    } 
	return 0;
}
