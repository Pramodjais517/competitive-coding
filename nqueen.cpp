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
bool issafe(int board[][4],int i,int j,int n)
{
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1)
		return false;
	}
    int	x = i;
	int y = j;
	while(x>=0 and y>=0){
		if(board[x][y]==1)
		return false;
		x--;
		y--; 
	}
	x = i;y=j;
	while(x>=0 and y<n)
	{
		if(board[x][y]==1)
		return false;
		x--;
		y++;
	}
	return true;
}

bool solve(int board[][4],int i,int n)
{
	//base case
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(board[i][j]==1)
				cout<<"Q ";
				else
				cout<<"- ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		return false;
	}
	// recursive case
	for(int j=0;j<n;j++)
	{
		
		if(issafe(board,i,j,n))
		{
			board[i][j]=1;
			bool poss = solve(board,i+1,n);
			if(poss)
			return true;
			board[i][j]=0;
			
		}
	}
	return false;
	
}
int main()
{
int n=4;
int board[4][4]={0};
solve(board,0,n);
return 0;
}

