#include <bits/stdc++.h> 
using namespace std; 


  map<int, int> m; 

bool cmp(pair<int, int>& a, pair<int, int>& b) 
{ 
  if(a.second!=b.second)
    return a.second > b.second; 
    
    return a>b;
} 
  
int main() 
{ 
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(m.find(arr[i]) != m.end())
      {
        m[arr[i]]++;
    }
    else
    {
      m[arr[i]]=1;
    }
  }
  
  
    for (auto it : m) { 
        cout<< it.second << " "; 
    } 
    return 0; 
}
