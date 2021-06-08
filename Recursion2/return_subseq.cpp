#include <bits/stdc++.h>
using namespace std;

int subseq(string s, string o[])
{
    if (s.size() == 0)
    {
        o[0] = "";
        return 1;
    }
    int small = subseq(s.substr(1), o);
    for (int i = 0; i < small; i++)
    {
        o[i + small] = s[0] + o[i];
    }
    return 2 * small;
}

int main()
{
    string s;
    cin >> s;
    string o[1000];
    int n = subseq(s, o);
    for (int i = 0; i < n; i++)
    {
        cout << o[i] << "\n";
    }
}