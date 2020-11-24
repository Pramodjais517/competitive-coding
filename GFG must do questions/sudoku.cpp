#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mat[9][9];

bool isvalid(int i,int j,int val)
{
	//check in row
	for(int k=0;k<9;k++)
	{
		if(mat[i][k] == val)
			return false;
	}
	//check in column
	for(int k=0;k<9;k++)
	{
		if(mat[k][j] == val)
			return false;
	}
	// check is grid of 3*3
	int ig = i/3 * 3;
	int jg = j/3 * 3;
	for(int l=ig;l<(ig+3);l++)
	{
		for(int m=jg;m<(jg+3);m++)
		{
			if(mat[l][m]==val)
				return false;		
		}
	}
	return true;
}

bool sudoku(int i,int j)
{
	//end case;
	if(j>=9)
	i+=1,j=0;
	if(i>=9)
	return true;
	// every node must have value between 1-9
	if(mat[i][j]==0)
	{
		for(int k=1;k<=9;k++)
		{
			if(isvalid(i,j,k))
			{
				mat[i][j] = k;
				if(sudoku(i,j+1))
				{
					return true;
				}
				mat[i][j] = 0;
			}
		}	
		return false;
	}
	return sudoku(i,j+1);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>mat[i][j];
		}
	}
	sudoku(0,0);
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
}
return 0;
}


