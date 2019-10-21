#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
  	int n;
  	cin>>n;
  	int height[n];
  	f(i,0,n,1)
  	cin>>height[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int ml=0,mr=0;
            for(int j=i;j>=0;j--)
            {
                ml = max(ml,height[j]);
            }
            for(int j=i;j<n;j++)
            {
                mr = max(mr,height[j]);
            }
            ans=ans+(min(mr,ml)-height[i]);
		}
		cout<<ans;
return 0;
}


