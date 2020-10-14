#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

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

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	cout<<countTotalDistinct(s) + n<<"\n";
}
return 0;
}


