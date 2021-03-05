#include <bits/stdc++.h>
using namespace std;

int num[10]={0,0,3,3,3,3,3,4,3,4};
char numpad[10][5]={{'0'},{'0'},{'a','b','c','@','@'},{'d','e','f','@','@'},
{'g','h','i','@','@'},{'j','k','l','@','@'},
{'m','n','o','@','@'},{'p','q','r','s','@'},
{'t','u','v','@','@'},{'w','x','y','z','@'}};

void keypad(int n,string o)
{
    if(n==0){cout<<o<<"\n";return;}
    int small=n/10;
    for(int i=0;i<num[n%10];i++)
    {
        keypad(n/10,numpad[n%10][i]+o);
    }
}

void printKeypad(int n)
{
    string o="";
    keypad(n,o);
}

int main()
{
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
