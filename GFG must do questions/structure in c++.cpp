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

struct student{
	int roll;
	string name;
	string cls;
	public:
	student()
	{
		
	}
	student(int roll,string name,string cls)
	{
		this->roll = roll;
		this->name = name;
		this->cls = cls;
	}
	void display()
	{
		cout<<roll<<" "<<name<<" "<<cls;
	}
	void update(int roll,string name,string cls)
	{
		this->roll = roll;
		this->name = name;
		this->cls  = cls;
	}
};
struct member:public student{
	float percent;
	bool result;
	member(string name,int roll,string cls,float percent, bool result)
	{
		this->name = name;
		this->cls = cls;
		this->roll = roll;
		this->percent = percent;
		this->result = result;
	}
	void display()
	{
		cout<<"Name : "<<name<<"\n";
		cout<<"Roll :"<<roll<<"\n";
		cout<<"Class :"<<cls<<"\n";
		cout<<"Percent: "<<percent<<"\n";
		cout<<"Result :"<<result<<"\n";
	}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//student s(1234,"pramod","cs2");
//s.display();
member m("pramod",98,"cs3",86.16,true);
m.display();
return 0;
}


