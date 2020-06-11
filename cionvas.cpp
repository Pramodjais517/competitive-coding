#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

#define ll long long

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin>>t;
 for(int q=0;q<t;q++)
	{
	 int n;cin>>n;
	 char A[n],B[n];
	 for(int i=0;i<n;i++) cin>>A[i];
	 for(int i=0;i<n;i++) cin>>B[i];
	 bool b=true;
	 vector<vector < int> > Ans;
	 for(int i=0;i<26;i++)
		{
		 vector<int> V;
		 vector<int> ans;
		 vector<int>::iterator itr;
		 for(int j=0;j<n;j++) if(B[j]=='a'+i) V.push_back(j);
		 bool bo=false,ch=true;
		 if(V.empty()) continue;
		 for(itr=V.begin();itr!=V.end();itr++)
			{
			 ans.push_back(*itr);
			 if(A[*itr]<B[*itr]) {bo=true;break;}
			 if(A[*itr]==B[*itr]) ch=false;
			}
		 if(bo || ch) {b=false;break;}
		 Ans.push_back(ans);
		}
	 if(!b) cout<<-1<<endl;
	 else
		{
		 vector<vector < int> >::iterator itr;
		 vector<int>::iterator btr;
		 cout<<Ans.size()<<endl;
		 for(itr=Ans.begin();itr!=Ans.end();itr++)
			{
			 cout<<itr->size()<<" ";
			 for(btr=itr->begin();btr!=itr->end();btr++) cout<<*btr<<" ";
			 cout<<endl;
			}
		}
	}
}
