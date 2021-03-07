#include<bits/stdc++.h>
using namespace std;

void fillspace(char a[],int loc,int size)
{
    for(int i=loc+1;i<size;i++)
    {
        a[i-1]=a[i];
    }
    a[size-1]='\0';
}
int searchx(char a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]=='x')return i;
    }
    return -1;
}
void removeX(char a[]) {
    {int n=strlen(a);
    if(n<=0)return;}

    {int loc=searchx(a,n);
    if(loc==(-1))return;
    fillspace(a,loc,n);}

    {removeX(a);}
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
/*
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abcSample Input 3 :
xx
Sample Output 3:

*/
