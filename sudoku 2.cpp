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

class Solution {
    public:
    bool Isvalid(vector<vector<int> > &board, int i,int j,int k, int n)
    {
	// check in the row
	for(int l=0;l<n;l++)
	{
		if(board[i][l]==k)
			return false;	
	}
	// check in the col.
	for(int l=0;l<n;l++)
	{
		 if(board[l][j]==k)
		 return false;
	}
	return true;
    }
    bool solve(vector<vector<int> > &board,int i,int j,int n,int sum)
    {
    	if(j>=n)
		{
			i+=1;
			j=0;
		}
		if(i>=n)
		{
			int tr=0;
		    for(int i=0;i<n;i++)
		    {
		    	for(int j=0;j<n;j++)
		    	{
		    	if(i==j)
		    	tr+=board[i][j];	
				}
		    
			}
			if(tr==sum)
			return true;
			return false;
		}
		if(board[i][j]==0)
		{
			for(int k=1;k<=n;k++)
			{
				if(Isvalid(board,i,j,k,n))
				{
					board[i][j] = k;
					if(solve(board,i,j+1,n,sum))
					return true;
					board[i][j]=0;
				}
			}
			return false;
		}
		else
	 	{
			if(solve(board,i,j+1,n,sum))
				return true;
			return false;
	 	}
    }
    void solveSudoku(vector<vector<int> > &board,int n,int sum,int c){
        bool s=solve(board,0,0,n,sum);
        if(s)
        {
			cout<<"Case #"<<c<<": "<<"POSSIBLE\n";
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<board[i][j]<<" ";
				}
				cout<<"\n";
			}        	
		}
		else
		cout<<"Case #"<<c<<": "<<"IMPOSSIBLE\n";
        return;
    }
};
int main()
{
	ll t;
	cin>>t;
	ll c=1;
	while(c<=t)
	{
	ll n,k;
	cin>>n>>k;
	vector<vector<int> > board(n);
	char a;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			board[i].pb(0);
		}
	}
	Solution s;
	s.solveSudoku(board,n,k,c);
	c++;
	}
	
return 0;
}

