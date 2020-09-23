#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s;string x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			s.push_back(x);
		}
		for(int i=0;i<s.size();i++)
		sort(s[i].begin(),s[i].end());
		map<string, int> m;
		for(auto i:s)
		m[i]++;
		vector<int>ans;
		for(auto i:m)
		ans.push_back(i.second);
		sort(ans.begin(),ans.end());
		for(auto i:ans)
		cout<<i<<" ";
		cout<<"\n";
	}
return 0;
}
