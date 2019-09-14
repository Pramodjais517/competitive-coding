#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define fr(i,s,e,inc) f
#define itr(i,ar) for(auto &i:ar)

int main()
{
ll n;
cin>>n;
ll ar[n];
f(i,0,n,1)
cin>>ar[i];
ll min_count=0,max_count=0;
ll min=ar[0];
ll max= ar[0];
f(i,1,n,1)
{
 if(ar[i]<min)
 {
 	min=ar[i];
 	min_count++;
 }
 if(ar[i]>max)
 {
 	max=ar[i];
 	max_count++;
 }
}
cout<<max_count<<" "<<min_count;
return 0;
}


