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
bool Issafe(ll board[][10],ll i,ll j,ll n)
{
	// checking the column
	for(int k=0;k<i;k++)
	{
		if(board[k][j]==1)
		return false;
	}
	// checking left diagonal
	ll x=i,y=j;
	while(x>=0 and y>=0)
	{
		x--;
		y--;
		if(board[x][y]==1)
		return false;
		
	}
	// checking right diagonal
	x=i, y=j;
	while(x>=0 and y<n)
	{
		x--;
		y++;
		if(board[x][y]==1)
		return false;
		
	}
	return true;
}

bool solveNqueen(ll board[][10],ll i,ll n)
{
	if(i==n)
	{
		//board is complete now print the board
		for(ll j=0;j<n;j++)
		{
			for(ll k=0;k<n;k++)
			{
				cout<<board[j][k]<<" ";
			}
			cout<<"\n";
		}
		return true;
	}
	for(ll j=0;j<n;j++)
	{
		if(Issafe(board,i,j,n))
		{
			board[i][j]=1;
			bool soln = solveNqueen(board,i+1,n);
			if(soln)
			{
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}

int main()
{
 ll n;
 cin>>n;
 ll board[10][10];
 memset(board,0,sizeof(board));
 solveNqueen(board,0,n);
return 0;
}

