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

vector<int> arr;
bool mat[11][11];

bool isvalid(int i,int j,int n)
{
	//check in row
	for(int k=0;k<=j;k++)
	{
		if(mat[i][k])
		return false;
	}
	//check in column
	for(int k=0;k<=i;k++)
	{
		if(mat[k][j])
		return false;
	}
	//check upper left diagonal
	int m = j,l=i;
	while(l>=0 and m>=0)
	{
		if(mat[l][m])
		return false;
		l-- , m-- ;
	}
	//check upper right diagonal
	m = j,l=i;
	while(l>=0 and m<n)
	{
		if(mat[l][m])
		return false;
		l-- , m++ ;
	}
	return true;
	
}

bool solve(int i,int n)
{	
	if(i>=n)
	return true;
	for(int j=0;j<n;j++)
	{
		if(isvalid(i,j,n))
		{
			mat[i][j] = 1;
			if(solve(i+1,n))
			{
				if(i==0)
				{
					cout<<"[";
					for(int j=0;j<n;j++)
					{
						for(int k=0;k<n;k++)
						{
							if(mat[j][k])
							{
								cout<<k+1<<" ";
								mat[j][k] = false;
							}
						}
					}
					cout<<"] ";
					mat[i][j] = 0;
				}
				else
				return true;
			}
			else
			mat[i][j] = 0;
		}
	}
	return false;
	
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat[i][j] = false;
		}
	}
	bool sol = solve(0,n);
}	
return 0;
}


