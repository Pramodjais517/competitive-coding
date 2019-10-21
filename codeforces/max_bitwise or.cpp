#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rs reserve
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)
ll invertBits(int num) 
{ 
    // calculating number of bits 
    // in the number 
    int x = log2(num) + 1; 
  
    // Considering number to be 32 bit integer; 
    bitset<32> b(num); 
  
    // reversing the bits one by one 
    for (int i = 0; i < x; i++)  
        b.flip(i); 
  
    // converting bitset to number 
    return b.to_ulong();  
} 
int main()
{
   ll t;
   cin>>t;
   ll l,r,m;
   while(t--)
  {
  	cin>>l>>r;
  	m=r|invertBits(r);
  	cout<<m<<"\n";
  }
return 0;
}


