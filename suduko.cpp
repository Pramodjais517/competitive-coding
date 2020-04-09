#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define show(ar) for(auto &i:ar) cout<<i<<" "
#define mod 1000000007

ll exp(ll a, ll b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll r = pow(a,b/2);
	if(b&1)
	return r*a*r;
	return r*r;
}
// template ends here
bool Isvalid(int a[][9], int i,int j,int k, int n)
{
	// check in the row
	for(int l=0;l<n;l++)
	{
		if(a[i][l]==k)
		return false;
	}
	// check in the col.
	for(int l=0;l<n;l++)
	{
		if(a[l][j] == k)
		return false;
	}
	//check in the sub grid
	int gridi = i/3;
	int gridj = j/3;
	for(int l = gridi*3;l<gridi*3+3;l++)
	{
		for(int m= gridj*3 ; m<gridj*3 + 3; m++)
		{
			if(a[l][m] == k)
			return false;
		}
	}
	return true;
}

bool solve(int a[][9],int i,int j,int n)
{
	if(i>=n)
	{
		// print the suduko
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			cout<<a[i][j]<<" ";
			cout<<"\n";
		}
		return true;
	}
	if(j>=n)
	{
		i+=1;
		j=0;
	}
	if(a[i][j]==0)
	{
		for(int k=1;k<=9;k++)
		{
			if(Isvalid(a,i,j,k,n))
			{
				a[i][j] = k;
				if(solve(a,i,j+1,n))
				return true;
				a[i][j]=0;
			}
		}
		return false;
	}
	else
	{
		if(solve(a,i,j+1,n))
		return true;
		return false;
	}
}

int main()
{
	int n;
	cin>>n;
	int a[9][9];
		memset(a,0,sizeof(a));
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++)
			cin>>a[i][j];
		}
		solve(a,0,0,9);
		
return 0;
}

