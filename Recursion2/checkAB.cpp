#include <bits/stdc++.h>
using namespace std;

// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'

bool checkAB(char i[])
{
    if (i[0] == '\0')
    {
        return true;
    }
    if (i[0] == 'a')
    {
        if (i[1] == '\0')
            return true;
        else if (i[1] == 'a')
        {
            checkAB(i + 1);
        }
        else if (i[1] == 'b' && i[2] == 'b')
        {
            if (i[3] == '\0')
                return true;
            else if (i[3] == 'a')
            {
                checkAB(i + 4);
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}

int main()
{
    char input[100];
    bool ans;
    cin >> input;
    ans = checkAB(input);
    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
