#include <bits/stdc++.h>
using namespace std;

string getstring(int d)
{
    if (d == 2)
    {
        return "abc";
    }
    if (d == 3)
    {
        return "def";
    }
    if (d == 4)
    {
        return "ghi";
    }
    if (d == 5)
    {
        return "jkl";
    }
    if (d == 6)
    {
        return "mno";
    }
    if (d == 7)
    {
        return "pqrs";
    }
    if (d == 8)
    {
        return "tuv";
    }
    if (d == 9)
    {
        return "wxyz";
    }
    return "";
}

int keypad(int n, string o[])
{
    if (n == 0)
    {
        o[0] = "";
        return 1;
    }
    int small = keypad(n / 10, o);
    string c = getstring(n % 10);
    for (int j = 1; j < c.size(); j++)
        for (int i = 0; i < small; i++)
        {
            o[i + j * small] = o[i] + c[j];
        }
    for (int i = 0; i < small; i++)
    {
        o[i] = o[i] + c[0];
    }
    return c.size() * small;
}

int main()
{
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for (int i = 0; i < count && i < 10000; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
