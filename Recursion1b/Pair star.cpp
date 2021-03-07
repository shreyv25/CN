#include<bits/stdc++.h>
using namespace std;

void pairStar(char a[]) {
    int n=strlen(a);
    if(n<=1)return;
    if(a[0]==a[1])
    {
        for(int i=n-1;i>0;i--)
        {
            a[i+1]=a[i];
        }
        a[1]='*';
        a[n+1]='\0';
    }
    pairStar(a+1);
}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
/*
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
*/
