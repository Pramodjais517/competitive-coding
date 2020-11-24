#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,A,B;
cin>>n>>A>>B;
int max_size = sqrt(A*A + B*B);
int size;
while(n--)
{
	cin>>size;
	if(size <=max_size)
	{
		cout<<"yes\n";
	}
	else
	cout<<"no\n";
}
return 0;
}


