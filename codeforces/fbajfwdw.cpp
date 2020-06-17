#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N=1e6+3;
ll n , t , x , y , m , k;
int main()
{
    cin >> t;
    string s;
    while(t--)
    {
        cin >> n >> k;
        cin >> s;
        m=-1;
        x=0;
        y=0;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i]=='1')
            {
                y++;
                if(m!=-1)
                {
                    x+=((i-m-1)/( (2 *k) +1));
                }
                else
                {
                    x+=((i)/(k+1));
                }
                m=i;
            }
        }
        if(m==-1)
        {
            
            x++;
            m=0;
        }
        x+=((n-1-m-1)/(k+1));
        cout << x << "\n";
    }
    return 0;
}
