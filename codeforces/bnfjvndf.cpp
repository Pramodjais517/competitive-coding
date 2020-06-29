#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define pi (3.141592653589)
#define deb(n) cerr << #n << " = " << (n) << " ";
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(10);
	int T;
	cin >> T;
	while(T--)
	{	
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0;
		int sol = n;
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '(')
			{
				cnt++;
			}
			else
			{
				cnt--;
			}
			sol = min(sol, cnt);
		}
		cout << abs(sol) << "\n";
	}

	return 0;
}
WW
