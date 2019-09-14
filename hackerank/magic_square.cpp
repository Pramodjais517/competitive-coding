#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,s,e,inc) for(int i=s;i<e;i+=inc)
#define itr(i,ar) for(auto &i:ar)

int main()
{
int a[3][3];
f(i,0,3,1)
f(j,0,3,1)
cin>>a[i][j];
int magic_mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
};
int min_cost=100;
int cal_cost;
f(i,0,8,1)
{
    cal_cost=0;
	f(j,0,3,1)
	{
		f(k,0,3,1)
		{
		cal_cost+=abs(magic_mat[i][j][k]-a[j][k]);	
		}
	}
	min_cost =  min(min_cost,cal_cost);
}
cout<<min_cost;
return 0;
}


