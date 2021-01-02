#include<bits/stdc++.h>
using namespace std;
#define ll long long

fun SeatingStudents(arr: Array<Int>): Int {
    if(arr.isEmpty() || arr[0] % 2 != 0)
        throw Exception("invalid argument") //optional

    val totalRows = arr[0] / 2
    var totalCombinations = (totalRows - 1) * 2 + totalRows
    if(arr.size == 1)
        return  totalCombinations

    for(i in 1 until arr.size) {
        if(arr[i] < 1 || i > 1 && arr[i] <= arr[i-1])
            throw Exception("invalid value in argument") // optional
      
        val isNeighbors = arr[i] % 2 == 0 && i > 1 && arr[i] - arr[i-1] == 1
        val isFirstOrLast = arr[i] in 1 .. 2 || arr[i] in arr[0]-1 .. arr[0]
        val isParallel = (i > 1 && arr[i] - arr[i-1] == 2) || (i > 2 && arr[i] - arr[i-2] == 2)

        if(isFirstOrLast && (isNeighbors || isParallel))
            totalCombinations--
        else if(isFirstOrLast || isNeighbors || isParallel)
            totalCombinations -= 2
        else
            totalCombinations -= 3
    }
    
    return totalCombinations
}

int ArrayChallenge(int arr[],int arrLength)
{
	int n = arr[0];
	bool a[n][2];
	int count = 0;
	for(int i=0;i<n;i++)
	{
		for(int )
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int arr[] = {8,1,8};
int arrLength = 3;
cout<<ArrayChallenge(arr,n);
return 0;
}


