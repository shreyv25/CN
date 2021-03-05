#include <bits/stdc++.h>
using namespace std;

// a - input array
// n - length of input array
// x - value to be searched

int search(int l,int h,int a[],int x)
{
    int mid=(l+h)/2;
    if (h >= l){
    if(x==a[mid]){return mid;}
    else if(x>a[mid])
    {return search(mid+1,h,a,x);}
    else
    {return search(l,mid-1,a,x);}
    }
    return -1;
}

int binarySearch(int a[], int n, int x) 
{
    int l=0,h=n-1,mid=(l+h)/2;
    return search(l,h,a,x);
}

int main()
{
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }
    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
/*
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note: If given array size is even, take first mid.
Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 
*/