// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the count of distinct 
// characters in all the distinct 
// sub-strings of the given string 
int countTotalDistinct(string str) 
{ 
	int cnt = 0; 

	// To store all the sub-strings 
	set<string> items; 

	for (int i = 0; i < str.length(); ++i) { 

		// To store the current sub-string 
		string temp = ""; 

		// To store the characters of the 
		// current sub-string 
		set<char> ans; 
		for (int j = i; j < str.length(); ++j) { 
			temp = temp + str[j]; 
			ans.insert(str[j]); 

			// If current sub-string hasn't 
			// been stored before 
			if (items.find(temp) == items.end()) { 

				// Insert it into the set 
				items.insert(temp); 

				// Update the count of 
				// distinct characters 
				cnt += ans.size(); 
			} 
		} 
	} 

	return cnt; 
} 

// Driver code 
int main() 
{ 
	string str = "aabb"; 

	cout << countTotalDistinct(str) + n; 

	return 0; 
} 

