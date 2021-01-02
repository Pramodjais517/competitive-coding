#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int n = s.length();
int arr[n][n];
memset(arr,0,sizeof(arr));
for(int i=0;i<n;i++)
{
	for(int j=0;j<(n - i); j++)
	{
		if(j == i+j)
		arr[j][i+j] = 1;
		else if(i==1)
		{
			if(s[j] == s[i+j])
			arr[j][i+j] = 2;
			else
			arr[j][i+j] = 1;
		}
		else
		{
			 if(s[j] == s[i+j])
			 arr[j][i+j] = arr[j+1][i + j - 1] + 2;
			 else
			 arr[j][i+j] = max(arr[j][i+j-1],arr[j+1][i+j]);
		}
	}
}
fi(i,0,n,1)
{
	fi(j,0,n,1)
	cout<<arr[i][j]<<" ";
	cout<<"\n";
}
//cout<<arr[0][n-1]<<"\n";
return 0;
}


