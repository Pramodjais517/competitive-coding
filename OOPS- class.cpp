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

class Car{
	public:
		string name;
		string model;
		string company;
	void print()
	{
		cout<<company<<" ";
		cout<<model<<" ";
		cout<<sizeof(this);
	}
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Car c;
c.company = "Ford";
c.name = "Mustungzdvnksncjsacnaskjawoaicjxznkjcndskjbkjvbdsvvhsndsic sdckjnxcmnzkjcnjsc                           hnjzscnjskj";
c.model = "2018";
c.print();
Car b;
b.company = "tata";
b.print();
return 0;
}


