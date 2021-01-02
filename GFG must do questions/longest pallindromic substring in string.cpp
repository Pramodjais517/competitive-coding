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
ll t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int n = s.length();
	bool arr[n][n];
	memset(arr,false,sizeof(arr));
	pair<int,int> ans = {0,1};
	int prev = 0;
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<(n-k);i++)
		{
			int  j = (i+k);
			if(i==j)
			arr[i][j] = 1;
			else if(i+1 ==j)
			{
				if(s[i] == s[j])
				arr[i][j] = 1;
				else
				arr[i][j] = 0;
			}
			else
			{
				if(s[i]==s[j] and arr[i+1][j-1] == 1)
				{
					arr[i][j]=1;
				}
				else
				arr[i][j] = 0;
			}
			if(arr[i][j]== 1 and k > prev)
			{
			ans = {i,k+1};
			prev = k;
			}
		}
	}
	cout<<s.substr(ans.first, ans.second)<<"\n";
}
return 0;
}


