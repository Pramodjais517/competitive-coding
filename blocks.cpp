#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
 
bool solution(string s,char c)
{
	int n = s.size();
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=c)
		{
			s[i]=c;
			s[i+1]=='B' ? s[i+1]='W' : s[i+1]='B';
			ans.push_back(i+1);
		}
	}
	if(s[n-1]==c)
	return true;
	return false;
}
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int W=0,B=0;
	for(int i=0;i<n;i++)
	{
		s[i]=='W'? W++ : B++;
	}
	if(W&1 and B&1)
	{
		cout<<-1;
		return 0;
	}
	bool sol =  solution(s,'B');
	if(!sol)
	{
		ans.clear();
		sol = solution(s,'W');
	}
	cout<<ans.size()<<"\n";
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
