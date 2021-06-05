#include<bits/stdc++.h>
using namespace std;

void removeX(char a[]) {
    if(a[0]=='\0')return;
    int size;
    for(size=0;a[size]!='\0';size++);
    if(a[0]=='x')
    {
        for(int i=0;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        a[size-1]='\0';
        removeX(a);
    }
    removeX(a+1);
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
