#include<bits/stdc++.h>
using namespace std;
class A;
class B{
	public:
		void show(A &a);
};

class A{
	private:
		string name;
	public:
		A()
		{
			name = "Pramod";
		}
		friend void B::show(A&);
};

void B::show(A &a)
{
	cout<<a.name;
}
int main(){
	A a;
	B b;
	b.show(a);
}
