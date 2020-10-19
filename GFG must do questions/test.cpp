#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int p,i,j,n;
        cin>>n;
       char s[n];
        queue<char>q;
        for(i=0;i<n;i++)
        cin>>s[i];
        int a[27]={0};
        for(i=0;i<n;i++)
        {
            p=s[i]-96;
            if(a[p]==0)
            q.push(s[i]);
            a[p]=a[p]+1;
            while(1)
            {
                if(q.empty()!=1)
                {
                    j=q.front()-96;
                    if(a[j]==1)
                	{
                   		cout<<q.front()<<" ";
                   		break;
                	}
                	else
                	q.pop();
                }
                else
                {
                    cout<<-1<<" ";
                    break;
                }
                
            }
        }
        cout<<endl;
    }
	return 0;
 }
