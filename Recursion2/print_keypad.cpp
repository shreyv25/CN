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

void keypad(int n, string o)
{
    if (n == 0)
    {
        cout << o << "\n";
        return;
    }
    string cur = getstring(n % 10);
    for (int i = 0; i < cur.size(); i++)
    {
        keypad(n / 10, cur[i] + o);
    }
}

int main()
{
    int n;
    cin >> n;
    string o;
    keypad(n, o);
    return 0;
}