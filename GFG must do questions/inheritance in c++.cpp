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

class Animal{
	public:
		string name;
		int height;
		int weight;
		string color;
	Animal(string name, int height, int weight, string color)
	{
		this->name = name;
		this->height = height;
		this->weight = weight;
		this->color = color;
	}
	void display()
	{
		cout<<name<<" "<<height<<" "<<weight<<" "<<color<<"\n";
	}
};

class Cat:public Animal{
	public:
	Cat(string name,int height,int weight,string color) : Animal(name,height,weight,color)
	{
		
	}
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
Cat c("Pussy",10,15,"black");
c.display();
return 0;
}


