#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
	

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
queue<pair<string, ll>> ware;
stack<pair<string, ll>> A,B,C;
queue<char> order_of_sent;
while(1)
{
string comm;
cin>>comm;
if(comm ==  "RECV"){
		string label; ll size;
		cin>>label>>size;
		ware.push({label,size});
	}
else if(comm == "LOAD"){
		char vattrain;
		cin>>vattrain;
		pair<string,ll> q = ware.front();
		ware.pop();
		if(vattrain == 'A')
		A.push(q);
		else if(vattrain == 'B')
		B.push(q);
		else
		C.push(q);
}
else if(comm  == "XFER"){
		char from ,to;
		cin>>from>>to;
		pair<string,ll> tp;
		if(from == 'A')
		tp = A.top(),A.pop();
		else if(from == 'B')
		tp = B.top(),B.pop();
		else 
		tp = C.top(),C.pop();
		
		if(to=='A')
		A.push(tp);
		else if(to == 'B')
		B.push(tp);
		else
		C.push(tp);
}
else if(comm == "SEND"){
		char vat;
		cin>>vat;
		order_of_sent.push(vat);
}
else
{
	break;
}
}
ll i=1;
while(!order_of_sent.empty())
{
	cout<<"VACTRAIN "<<i<<"\n";
	i++;
	char vat = order_of_sent.front();
	order_of_sent.pop();
	if(vat == 'A')
	{
		while(!A.empty())
		{
			cout<<A.top().first<<" "<<A.top().second<<"\n";
			A.pop();
		}
	}
	else if(vat == 'B')
	{
		while(!B.empty())
		{
			cout<<B.top().first<<" "<<B.top().second<<"\n";
			B.pop();
		}
	}
	else
	{
		while(!C.empty())
		{
			cout<<C.top().first<<" "<<C.top().second<<"\n";
			C.pop();
		}
	}
}
return 0;
}


