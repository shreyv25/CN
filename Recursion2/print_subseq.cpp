#include <bits/stdc++.h>
using namespace std;

// string getstring(int d)
// {
//     if (d == 2)
//     {
//         return "abc";
//     }
//     if (d == 3)
//     {
//         return "def";
//     }
//     if (d == 4)
//     {
//         return "ghi";
//     }
//     if (d == 5)
//     {
//         return "jkl";
//     }
//     if (d == 6)
//     {
//         return "mno";
//     }
//     if (d == 7)
//     {
//         return "pqrs";
//     }
//     if (d == 8)
//     {
//         return "tuv";
//     }
//     if (d == 9)
//     {
//         return "wxyz";
//     }
//     return "";
// }

// void printKeypad(int num)
// {
//     if (num == 0)
//     {
//         cout << "";
//         return;
//     }

// }

void printsubseq(string s, string o)
{
    if (s.length() == 0)
    {
        cout << o << "\n";
        return;
    }
    printsubseq(s.substr(1), o);
    printsubseq(s.substr(1), o + s[0]);
}

int main()
{
    string s;
    cin >> s;
    string o;
    printsubseq(s, o);
    return 0;
}