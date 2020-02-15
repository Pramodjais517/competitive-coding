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

int main()
{
    ll t,temp=0;
    cin>>t;
    while(t--)
    {
    ll n,request[4][4]={0};
    cin>>n;
    ll time[n];char show[n];
    for(ll i=0;i<n;i++)
    {
    cin>>show[i]>>time[i];
    }

    for(ll i=0;i<n;i++)
    {
        if(show[i]=='A')
        {
            if(time[i]==12)
                request[0][0]++;
            if(time[i]==3)
                request[0][1]++;
            if(time[i]==6)
                request[0][2]++;
            if(time[i]==9)
                request[0][3]++;
        }
        if(show[i]=='B')
        {
            if(time[i]==12)
                request[1][0]++;
            if(time[i]==3)
                request[1][1]++;
            if(time[i]==6)
                request[1][2]++;
            if(time[i]==9)
                request[1][3]++;
        }
        if(show[i]=='C')
        {
            if(time[i]==12)
                request[2][0]++;
            if(time[i]==3)
                request[2][1]++;
            if(time[i]==6)
                request[2][2]++;
            if(time[i]==9)
                request[2][3]++;
        }
        if(show[i]=='D')
        {
            if(time[i]==12)
                request[3][0]++;
            if(time[i]==3)
                request[3][1]++;
            if(time[i]==6)
                request[3][2]++;
            if(time[i]==9)
                request[3][3]++;
        }
    }

    ll i=0;
    ll max=0;
    ll maxel[4]={0};
    ll tm[4]={0},tmp=-1;
    while(i<4)
    {
        for(ll j=0;j<4;j++)
        {
            if(request[i][j]>max and tm[j]==0)
            {
                max=request[i][j];
                tmp = j;
            }
        }
        tm[tmp]=1;
        maxel[i]=max;
        max=0;
        i++; 
		tmp=-1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    }
    ll count=0;
    ll x=sizeof(maxel)/sizeof(maxel[0]);
    sort(maxel,maxel+x);

    for(ll i=0;i<4;i++)
    {

        if(maxel[i]==0)
        {
            count++;
        }
    }
    ll sum=maxel[3]*100+maxel[2]*75+maxel[1]*50+maxel[0]*25;
    ll profit = (sum-count*100);
//    fi(i,0,4,1)
//    cout<<tm[i]<<" ";
    cout<<profit<<endl;
    temp=temp+(profit);
    }
    cout<<temp;
    return 0;

}

