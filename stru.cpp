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

struct Student{
	string name;
	string cls;
};

struct Players: Student{
	string game;
	string level;
	Players(){
		this->name = "Pramod";
		this->cls = "CS-2";
		this->game = "Football";
		this->level = "Expert";
	}
	void Print()
	{
		cout<<name<<" studying in "<<cls<<" is a "<<level<<" "<<game<<" player";
	}
};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ll t;
//cin>>t;
//while(t--)
//{
//}
Players P;
P.Print();
return 0;
}

