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

int find(vector<int> &arr,int val)
{
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i] == val)
		return i;
	}
	return -1;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int cap;
	cin>>cap;
	queue<int> q;
	int count = 0;
	for(int i=0;i<n;i++)
	{
		//find if already present or not
		queue<int> temp;
		while(!q.empty() and arr[i] != q.front())
		{
			temp.push(q.front());
			q.pop();
		}
		if(q.empty())
		{
			// page fault occured
			q = temp;
			count++;
			if(temp.size() < cap)
			{
				q.push(arr[i]);
			}
			else
			{
				q.pop();
				q.push(arr[i]);
			}
		}
		else
		{
			//page fault didn't 
			int ele = q.front();
			q.pop();
			while(!q.empty())
			{
				temp.push(q.front());
				q.pop();
			}
			q =temp;
			q.push(ele);
		}
	}
	cout<<count<<"\n";
}
return 0;
}


