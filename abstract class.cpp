#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define rs reserve
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define fi(i,s,e,inc) for(auto i=s;i<e;i+=inc)
#define fie(i,s,e,inc) for(auto i=s;i<=e;i+=inc)
#define fd(i,s,e,dec) for(auto i=s;i>e;i-=dec)
#define fde(i,s,e,dec) for(auto i=s;i>=e;i-=dec)
#define itr(i,ar) for(auto i=ar.begin();i!=ar.end();i++)
#define mod 1000000007

class Student{
	public:
	string name;
	string cls;
};

class Player:public Student{
	public:
	Player()
	{
		name = "pramod";
		cls = "CS-2";
		cout<<name<<" "<<cls<<" \n";
	}
};

class Dancer:public Student{
	public:
		Dancer(){
			name = "harsh";
			cls = "CS_2";
			cout<<name<<" "<<cls<<"\n";
		}
};

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

Player P;
Dancer D;
return 0;
}

