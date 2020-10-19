#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int n,m;
	cin>>m>>n;
	string temp = s;
	int cnt=0,l=s.length();
	bool f =1;
	do
	{
		if(f)
		{
		temp = temp.substr(l-m,m) + temp.substr(0,l-m);
		}
		else
		{
		temp = temp.substr(l-n,n) + temp.substr(0,l-n);	
		}
		f = !f;
		cnt++;
	}
	while(s!=temp);
	cout<<cnt;
	return 0;
}
