#include <bits/stdc++.h>
using namespace std;

int binS(int i[], int si, int e, int x)
{
    if (si > e)
        return -1;
    int h = (si + e) / 2;
    if (i[h] == x)
        return h;
    if (x > i[h])
    {
        return binS(i, h + 1, e, x);
    }
    else
    {
        return binS(i, si, h - 1, x);
    }
    return -1;
}
int binarySearch(int i[], int n, int x)
{
    return binS(i, 0, n - 1, x);
}

int main()
{
    int input[100000], length, element, ans;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> input[i];
        ;
    }

    cin >> element;
    ans = binarySearch(input, length, element);
    cout << ans << endl;
}