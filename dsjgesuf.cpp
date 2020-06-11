#include <iostream>

using namespace std;

int main()
{
   int tt;
   cin>>tt;
   while(tt--)
   {
       int n,q;
       cin>>n>>q;
       int even=0,odd=0;
       for(int i=0;i<n;i++)
       {
           int x;
           cin>>x;
           if(x%2)
           odd++;
           else 
           even++;
       }
       if(odd==0)
       {
           cout<<"NO\n";
       }
       else 
       {
           q--,odd--;
           int f=0;
           if(q<=even)
           cout<<"YES\n";
           else if(q%2&&even==0)
           cout<<"NO\n";
           else 
           {
              for(int i=2;i<=odd;i+=2)
              if(i+even>=q)
               f=1;
           
           if(f)
           cout<<"YES\n";
           else 
           cout<<"NO\n";}
       }
       
   }
   
   return 0;
}
