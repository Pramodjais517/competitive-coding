#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	int n,m;
	cin>>n>>m;
	map<int,int> mp;
	int val;
	for(int i=0;i<n;i++)
	{
	    cin>>val;
	    mp[val]++;
	}
	int key[m];
	for(int i=0;i<m;i++)
	{
	    cin>>key[i];
	}
	vector<int> temp;
	for(int i=0;i<m;i++)
	{
	    while(mp[key[i]]!=0)
	    {
	        temp.push_back(key[i]);
	        mp[key[i]]--;
	    }
	}
	for(auto i = mp.begin();i!=mp.end();i++)
	{
	    if(i->second!=0)
	    temp.push_back(i->first);
	}
	for(int i=0;i<n;i++)
	{
	    cout<<temp[i]<<" ";
	}
	}
	cout<<"\n";
	return 0;
}
