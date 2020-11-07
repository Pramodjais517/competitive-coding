// An efficient C++ program to compute sum of bitwise OR 
// of all pairs 
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int LLI; 

// Returns value of "arr[0] | arr[1] + arr[0] | arr[2] + 
// ... arr[i] | arr[j] + ..... arr[n-2] | arr[n-1]" 

LLI pairORSum(LLI arr[], LLI n) 
{ 

	LLI ans = 0; // Initialize result 
	// Traverse over all bits 
	for (LLI i = 0; i < 32; i++) { 
		// Count number of elements with the i'th bit set(ie., 1) 
		LLI k1 = 0; // Initialize the count 

		// Count number of elements with i’th bit not-set(ie., 0) ` 
		LLI k0 = 0; // Initialize the count 

		for (LLI j = 0; j < n; j++) { 

			if ((arr[j] & (1 << i))) // if i'th bit is set 
				k1++; 
			else
				k0++; 
		} 
		// There are k1 set bits, means k1(k1-1)/2 pairs. k1C2 
		// There are k0 not-set bits and k1 set bits so total pairs will be k1*k0. 

		// Every pair adds 2^i to the answer. Therefore, 

		ans = ans + (1 << i) * (k1 * (k1 - 1) / 2) + (1 << i) * (k1 * k0); 
	} 

	return ans; 
} 

// Driver program to test the above function 

int main() 

{ 

	LLI arr[] = { 1,2,3,4}; 

	LLI n = sizeof(arr) / sizeof(arr[0]); 

	cout << pairORSum(arr, n) << endl; 

	return 0; 
} 

