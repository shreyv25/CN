#include<bits/stdc++.h>
using namespace std;

char numpad[10][5]={{'0'},{'0'},{'a','b','c','@','@'},{'d','e','f','@','@'},{'g','h','i','@','@'},{'j','k','l','@','@'},
    {'m','n','o','@','@'},{'p','q','r','s','@'},
    {'t','u','v','@','@'},{'w','x','y','z','@'}};

int keypad(int n, string o[])
{
    if(n==0 && n*10==0){return 0;}
    if(n/10==0 && n!=0){int i;
        for(i=0;numpad[n%10][i]!='@';i++)
    {
        o[i]=numpad[n%10][i];
    }
        return i;}
    
    int small=(n-n%10)/10;
    int smlcnt=keypad(small,o);
    int  k=(n%10==7||n%10==9)?4:3;
    {        
        string tmp[1000];
        int f=0;
        for(int i=0;i<smlcnt;i++)
        {
            for(int j=0;j<k;j++)
            {
                tmp[f]=o[i]+numpad[n%10][j];
                f++;
            }
        }
        for(int i=0;i<f;i++){o[i]=tmp[i];}
    }
    return k*smlcnt;
}

int main()
{
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}