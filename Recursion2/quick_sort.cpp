#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int si, int e)
{
    int pi = 0;
    int lessN = 0;
    int x = a[si + pi];
    for (int i = si; i <= e; i++)
    {
        if (a[i] < x)
            lessN++;
    }
    swap(a[si + pi], a[si + lessN]);
    int i = si, j = e;
    while (i != si + lessN && j != si + lessN)
    {
        if (a[i] < x)
            i++;
        else if (a[j] >= x)
            j--;
        else
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return si + lessN;
}

void qs(int a[], int si, int e)
{
    if (si >= e)
        return;
    int c = partition(a, si, e);
    qs(a, si, c - 1);
    qs(a, c + 1, e);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    qs(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}