#include<iostream>
using namespace std;

void trim(string& s,int i)
{
    char temp = s[i];
    int j = i+1;
    while(i<s.length() and s[j]==temp)
    s[j] = -1,j++;
    if(j != i+1)
    s[i] = -1;
}

void solve(string &s, int pos)
{
    if(pos >= s.size())
    {
        return;
    }
    solve(s,pos+1);
    trim(s,pos);
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    solve(s,0);
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]!= -1)
	        cout<<s[i];
	    }
	    cout<<"\n";
	}
	return 0;
}
