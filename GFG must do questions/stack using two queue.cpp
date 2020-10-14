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
template<typename T>
class Stack{
	queue<T> q1,q2;
	public:
		void push(T d)
		{
			q2.push(d);
			while(!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			swap(q1,q2);
		}
		void pop()
		{
			q1.pop();
		}
		int top()
		{
			return q1.front();
		}
		bool empty()
		{
			return q1.empty() and q2.empty();
		}
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Stack<int> s;
s.push(5);
s.push(6);
s.push(7);
s.pop();
s.pop();
s.push(10);
s.push(20);
while(!s.empty())
{
	cout<<s.top()<<' ';
	s.pop();
}
return 0;
}


