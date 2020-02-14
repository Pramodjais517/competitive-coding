#include<bits/stdc++.h>
using namespace std;
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

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		ll arr[n];
		ll i,ind=-1;
		bool flag1=0;
		fi(i,0,n,1)
		cin>>arr[i];
		fi(i,0,n,1)
		{
			if((p%arr[i]!=0 and arr[i]<p) or arr[i]>p)
			{
				flag1=1;
				break;
			}
		}
		if(flag1==1)
		{
			cout<<"YES ";
			bool flag2=0;
			fi(i,0,n,1)
			{
				if(flag2!=1)
				{
					if(arr[i]<p and  p%arr[i]!=0)
					{
						cout<<(p / arr[i] + 1)<<" ";
						flag2=1;
					}
					else if (arr[i] > p)
                      {
                      cout<<1<<" ";
                        flag2=1;
                      }
                      else if(p%arr[i]==0)
                        cout<<0<<" ";
				}
				else
				cout<<0<<" ";
			}
		}
		else
		{
			ll ind1 = -1;
            ll ind2 = -1;
            bool flag = 0;
            fi(i,0,n-1,1)
            fi(j,i+1,n,1)
                  {
                      if(flag!=1)
                      {
                          if(arr[j]%arr[i]!=0)
                          {
                              ind1 = i;
                              ind2 = j;
                              flag = 1;
                          }
                      }
                      else
                        break;
                  }
                if(flag==0)
                  cout<<"NO ";
                else
                {
                    ll val1 = p/arr[ind2] - 1;
                    ll val2 = arr[ind2] / arr[ind1] + 1;
                    cout<<"YES ";
                    fi(i,0,n,1)
                    {
                        if(i==ind1)
                          cout<<val2<<" ";
                        else if(i==ind2)
                          cout<<val1<<" ";
                        else
                          cout<<0<<" ";
                    }
                }
		}
		cout<<"\n";
	}
return 0;
}

