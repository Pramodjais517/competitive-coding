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

int tri(vector<int>a,vector<int>b,vector<int>c)
{
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        int indx=-1;
        for(int j=0;j<b.size();j++)
        {
            for(int k=0;k<c.size();k++)
            {
                if(pow((b[j]+c[k]),2)==b[j]*b[j]+c[k]*c[k]+2*a[i]*a[i])
                {
                ans++;
                indx=k;
                break;
                }
                if(j==indx)
                break;
            }
        }
    }
    return ans;
}

int main() {
	int t; 
	cin>>t;
	while(t--)
	{
	    ll n,m,a,zero=0; 
		cin>>n>>m;
	    int sum=0;
	    
	    vector<int> px,nx,py,ny;
	    
	    for(int i=0;i<n;i++)
	    {
	    	
	        cin>>a;
	        if(a<0)
	        nx.push_back(-a);
	        else if(a>0)
	        px.push_back(a);
	        else
	        zero++;
	        
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>a;
	        if(a<0)
	        ny.push_back(-a);
	        else if(a>0)
	        py.push_back(a);
	        else
	        zero++;
	        
	    }
	    
	    sort(px.begin(),px.end());
	    sort(nx.begin(),nx.end());
	    sort(py.begin(),py.end());
	    sort(ny.begin(),ny.end());
	    
	    sum+=tri(py,px,nx);
	    sum+=tri(ny,px,nx);
	    sum+=tri(px,py,ny);
	    sum+=tri(nx,py,ny);
	    if(zero>0)
	    {
	        sum+=py.size()*px.size()+py.size()*nx.size()+ny.size()*px.size()+ny.size()*nx.size();
	    }
	    
	    cout<<sum<<"\n";
	}
	return 0;
}
