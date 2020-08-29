#include<bits/stdc++.h>
using namespace std;
// template starts here
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
// template ends here
bool issafe(ll val,ll i,ll j, ll a[][9])
{
	// in same row
	for(ll k = 0;k<9;k++)
	{
		if(a[i][k] == val)
		return false;
	}
	// same column
	for(ll k=0;k<9;k++)
	{
		if(a[k][j] == val)
		return false;
	}
	// in same grid
	ll gi = i/3 * 3;
	ll gj = j/3 * 3;
	for(ll k = gi;k<gi+3;k++)
	{
		for(ll l = gj;l<gj+3;l++)
		{
			if(a[k][l] == val)
			return false;
		}
	}
	return true;
}

bool sudoku(ll a[][9], ll i,ll j)
{
	if(i == 9)
		return true;
	if(j == 9)
		sudoku(a,i+1,0);
	if(a[i][j] != 0)
		sudoku(a,i,j+1);
	for(ll num = 1;num <= 9;num++)
	{
		if(issafe(num,i,j,a))
		{
			a[i][j] = num;
			if(sudoku(a,i,j+1))
				return true;
		}
	}
	return false;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a[9][9];
fi(i,0,9,1)
{
	fi(j,0,9,1)
	{
		cin>>a[i][j];
	}
}
sudoku(a,0,0);
fi(i,0,9,1)
{
	fi(j,0,9,1)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<"\n";
}
return 0;
}

