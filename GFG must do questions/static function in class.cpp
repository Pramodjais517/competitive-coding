// C++ program to demonstrate static 
// member function in a class 
#include<iostream> 
using namespace std; 

class GfG 
{ 
public: 
	static int i;
	// static member function 
	
	GfG()
	{
		// eat 5 star do nothing 
	}
	static void printMsg() 
	{ 
		i+=1;
		cout<<i<<" ";
	} 
}; 
int GfG::i = 0;
// main function 
int main() 
{ 
	// invoking a static member function 
	GfG::printMsg(); 
	GfG::printMsg();
} 

