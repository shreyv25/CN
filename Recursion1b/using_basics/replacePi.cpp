#include <bits/stdc++.h>
using namespace std;

void replacePi(char a[])
{
    int len=strlen(a);
    if(len<=0)return;
    replacePi(a+1);
    if(a[0]=='p'&&a[1]=='i')
    {   
        int len=strlen(a);
        for(int i=len-1;i>1;i--)
        {
            a[i+2]=a[i];
        }
        a[0]='3';a[1]='.';a[2]='1';a[3]='4';
    }
}

int main()
{
    char a[1000];
    cin>>a;
    replacePi(a);
    cout<<a;
}