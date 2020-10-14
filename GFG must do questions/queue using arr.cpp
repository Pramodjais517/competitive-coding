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

class Queue{
	int* arr;
	int f,r,curr_size,max_size;
	public:
	Queue(int size = 10)
	{
		arr = new int[size];
		f = 0;
		r = size - 1;
		max_size = size;
		curr_size = 0;
	}
	bool full()
	{
		return curr_size == max_size;
	}
	bool empty()
	{
		return curr_size == 0;
	}
	void push(int d)
	{
		if(!full())
		{
			r = (r+1)%max_size;
			arr[r] = d;
			curr_size++;
		}
	}
	
	void pop()
	{
		f = (f+1)%max_size;
		curr_size--;
	}
	int front()
	{
		return arr[f];
	}
	~Queue(){
		if(arr != NULL)
		delete arr;
	}
	
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Queue q;
for(int i=0;i<10;i++)
q.push(i);
while(!q.empty())
{
	cout<<q.front()<<" ";
	q.pop();
}
return 0;
}


