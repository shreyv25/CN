#include <bits/stdc++.h>
using namespace std;

void merge2(int a[], int si, int h, int e)
{
    int* arr = new int[e-si+1];
    int i = si, j = h + 1, k = 0;
    while (i != h+1 && j != e+1)
    {
        if (a[i] <= a[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = a[j++];
        }
    }
    while (i != h+1)
    {
        arr[k++] = a[i++];
    }
    while (j != e+1)
    {
        arr[k++] = a[j++];
    }
    for (int f = 0; f < k; f++)
    {
        a[f+si] = arr[f];
    }
    delete arr;
}

void mergeS(int a[], int si, int e)
{
    if (si >= e)
        return;
    int h = (si + e) / 2;
    mergeS(a, si, h);
    mergeS(a, h + 1, e);
    merge2(a, si, h, e);
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeS(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}