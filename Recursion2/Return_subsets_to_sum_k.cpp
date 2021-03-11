#include <bits/stdc++.h>
using namespace std;
/***
You need to save all the subsets in the given 2D output array. 
And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column 
actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
int subsetSumToK(int a[], int l,int o[][50],int k)
{
    if(l==0)
    {
      if(k== 0)
        {
          o[0][0]=0;
          return 1;
        }else
        {
          return 0;
        }
    }
    int inck=subsetSumToK(a+1,l-1,o,k-a[0]);
    for(int i=0;i<inck;i++)
    {
      for(int j=o[i][0];j>=1;j--)
      {
        o[i][j+1]=o[i][j];
      }
      o[i][1]=a[0];
      o[i][0]=o[i][0]+1;
    }
    int f=subsetSumToK(a+1,l-1,o+inck,k);
    return f+inck;
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}

/*
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of 
elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Constraints :
1 <= n <= 20
Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output :
3 3
5 1
*/