#include<bits/stdc++.h>
using namespace std;
// template starts here
#define ll long long int
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
#define N 51
ll ar[N][N], I[N][N];

void mul(ll A[][N], ll B[][N], ll dim)
{
	ll res[dim+1][dim+1];
	fie(i,1,dim,1)
	{
		fie(j,1,dim,1){
			res[i][j] = 0;
			fie(k,1,dim,1)
			res[i][j] = (res[i][j]%mod +  (A[i][k]%mod * B[k][j]%mod)%mod)%mod;
		}
	}
	fie(i,1,dim,1) fie(j,1,dim,1) A[i][j] = res[i][j];
}

void power(ll A[][N], ll dim, ll n)
{
	fie(i,1,dim,1)
	{
		fie(j,1,dim,1)
		{
		if(i==j)
		I[i][j] = 1;
		else
		I[i][j] = 0;
		}
	}
	while(n)
	{
		if(n%2)
		mul(I,A,dim), n--;
		else
		mul(A,A,dim), n/=2;
	}
	
	fie(i,1,dim,1) fie(j,1,dim,1) A[i][j] = I[i][j];
}
void print(ll ar[][N],ll dim)
{
	fie(i,1,dim,1)
	{
		fie(j,1,dim,1)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll dim , n;
	cin>>dim>>n;
	fie(i,1,dim,1)
	{
		fie(j,1,dim,1)
		{
			cin>>ar[i][j];
		}
	}
	power(ar,dim,n);
	print(ar,dim);
}
return 0;
}

