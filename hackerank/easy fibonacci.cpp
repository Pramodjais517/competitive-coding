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
ll I[2][2];
void mul(ll A[][2],ll B[][2],ll n,ll m)
{
	ll res[n][2];
	fi(i,0,n,1)
	{
		fi(j,0,2,1)
		{
			res[i][j] = 0;
			fi(k,0,m,1)
			res[i][j]  = (res[i][j]%mod + (A[i][k]%mod * B[k][j]%mod)%mod)%mod;
		}
	}
	fi(i,0,n,1)
	fi(j,0,2,1)
	A[i][j] = res[i][j]; 
}
void mexp(ll A[][2],ll n)
{
	fi(i,0,2,1)
	{
	  fi(j,0,2,1)
	  {
	  	if(i==j)
	  	I[i][j]=1;
	  	else
	  	I[i][j]=0;
	  }
	}
	while(n)
	{
		if(n%2)
		mul(I,A,2,2),n--;
		else
		mul(A,A,2,2),n/=2;
	}
	fi(i,0,2,1)
	fi(j,0,2,1)
	A[i][j] = I[i][j];
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	ll f[1][2];
	f[0][0] = 1;
	f[0][1] = 2;
	ll M[2][2];
	M[0][0] = 0,M[0][1] = 1, M[1][0] = 1,M[1][1] = 1;
	mexp(M,n-1);
	mul(f,M,1,2);
	cout<<f[0][0]<<"\n";
}
return 0;
}

