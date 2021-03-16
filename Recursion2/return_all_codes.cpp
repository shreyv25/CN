/* Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. 
You are given a numeric string S. 
Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
Input format :
A numeric string
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
*/
#include <bits/stdc++.h>
using namespace std;

char inttochar(int a)
{
    char r='a'+a-1;
    return r;
}

int getCodes(string i, string o[10000]) 
{
    int len=i.length();
    if(len==0)
    {
        o[0]="";
        return 1;
    }
    int cnt1=getCodes(i.substr(1), o);
    int curr=i[0]-'0';
    char f=inttochar(curr);
    for(int i=0;i<cnt1;i++)
    {
        o[i]=f+o[i];
    }
    if(len<2)
    {
        o[cnt1]=i[0];
        return 1;
    }
    int nxt=(i[0]-'0')*10+(i[1]-'0');
    int cnt2=0;
    if(nxt>26 || nxt<1)
        {i.substr(1),o+cnt1;}
    else
    {
        cnt2=getCodes(i.substr(2),o+cnt1);
        char g=inttochar(nxt);
        for(int i=cnt1;i<cnt1+cnt2;i++)
        {
            o[i]=g+o[i];
        }
    }
    return cnt1+cnt2;
}

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
