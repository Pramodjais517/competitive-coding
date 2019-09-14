#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
void bubblesort(int ar[],int n)
{
	if(n==1)
	return;
	f(i,0,n-1,1)
	{
		if(ar[i]>=ar[i+1])
		swap(ar[i],ar[i+1]);
	}
	bubblesort(ar,n-1);
}

int main()
{
int n;
cin>>n;
int ar[n];
f(i,0,n,1)
cin>>ar[i];
bubblesort(ar,n);
f(i,0,n,1)
cout<<ar[i]<<" ";
return 0;
}


