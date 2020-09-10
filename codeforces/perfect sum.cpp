#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPerfect(ll n) 
{ 
    ll sum = 1; 
    for (long long int i=2; i*i<=n; i++) 
    { 
        if (n%i==0) 
        { 
            if(i*i!=n) 
                sum = sum + i + n/i; 
            else
                sum=sum+i; 
        } 
    }   
    if (sum == n && n != 1) 
        return true; 
   
    return false; 
} 

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
if(n>m)
{
	cout<<"Invalid Input";
}
else
{
	ll sum = 0;
	n = n-n%2;
	for(ll i = n;i<=m;i+=2)
	{
		if(isPerfect(i))
		sum+=i;
	}
	cout<<sum<<"\n";
}
return 0;
}


