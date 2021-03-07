#include<bits/stdc++.h>
using namespace std;

void makespace(char a[],int size,int location)
{
    for(int i=size-1;i>=location;i--)
    {
        a[i+2]=a[i];
    }
    a[size+2]='\0';
}
int searchpi(char a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(a[i]=='p' && a[i+1]=='i')return i;
    }
    return -1;
}
void replacePi(char a[]) {
    int n=strlen(a);
    if(n<=0)return;
    int loc=-1;
    loc=searchpi(a,n);
    if(loc==-1)return;
    makespace(a,n,loc);
    {a[loc]='3';a[loc+1]='.';a[loc+2]='1';a[loc+3]='4';}
    replacePi(a+loc+4);    
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
/*
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
*/