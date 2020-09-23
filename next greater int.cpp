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

void reverse(string& s, int l, int r) 
{ 
    while (l < r) 
        swap(s[l++], s[r--]); 
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int n = s.length();bool f = 0;
	string temp = s;
	for(int i=n-1;i>=0;i--)
	{
		f = 0;
		for(int j = i-1;j>=0;j--)
		{
			if(temp[j] < temp[i])
			{
				ll min_index = 0;
				ll min_diff = 0;
				for(int k = j+1;k<n;k++)
				{
					if(temp[k] - temp[j]  > min_diff)
					{
						min_index = k;
					}
				}
				swap(temp[min_index],temp[j]);
				reverse(temp,j+1,n-1);
				f = 1;
				break;
			}
		}
		if(f)
		break;
	}
	if(f)
	cout<<temp<<"\n";
	else
	cout<<"no answer\n";
}
return 0;
}


