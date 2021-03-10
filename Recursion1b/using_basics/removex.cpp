#include <bits/stdc++.h>
#include<cstring>
using namespace std;

void removex(char a[])
{
    int len=strlen(a);
    if(len==0)return;
    removex(a+1);
    if(a[0]=='x')
    {
        for(int j=0;j<len;j++)
        {a[j]=a[j+1];}
    }
}

int main()
{
    char s[1000];
    cin>>s;
    removex(s);
    cout<<s;
    return 0;
}