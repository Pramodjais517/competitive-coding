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

class Stack{
		vector<int> a;
		vector<int> min;
		vector<int> max;
	public:
	void push(int d)
	{
		a.pb(d);
		if(min.size() == 0 or d < min.back())
		{
			min.pb(d);
		}
		else
		{
			min.pb(min.back());
		}
		if(max.size() == 0 or d > max.back())
		{
			max.pb(d);
		}
		else{
			max.pb(max.back());
		}
	}
	int pop()
	{
		if(a.size()!=0)
		{
		min.pop_back();
		max.pop_back();
		int last = a.back();
		a.pop_back();
		return last;
		}
		return -1;
	}
	
	int Getmin()
	{
		if(min.size()!=0)
		return min.back();
		return -1;
	}
	int Getmax()
	{
		if(max.size()!=0)
		return max.back();
		return -1;
	}
	
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Stack s;
s.push(2);
s.push(3);
s.push(9);
s.push(1);
cout<<s.Getmin()<<" "<<s.Getmax()<<"\n";
s.pop();
cout<<s.Getmin()<<" "<<s.Getmax()<<"\n";

return 0;
}


