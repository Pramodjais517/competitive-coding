/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

void printarr(vector<int> arr,vector<int> dum, int n)
{
    for(auto i= 0;i<n;i++)
    {
       for(auto j=0;j<n;j++)
       {
       	if(arr[j]==dum[i])
       	{	
       	cout<<j+1<<" ";
       	break;
	   }
	      }
    }
}
vector<int> insertionSort(vector<int> arr,int n) {
    int key,j;
   for(int i=1;i<n;i++)
   {
       key = arr[i];
       j =i-1;
       while(key<=arr[j] and j>=0)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
   }
   return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr; vector<int> dum;
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        arr.push_back(val);
        dum.push_back(val);
    }
    arr = insertionSort(arr,n);
    printarr(arr,dum,n);
}
