#include <bits/stdc++.h>
using namespace std;

bool checkAB(char a[])
{
    bool ans=true;
    if(a[0]==0){ans=check(a+1);}else{return false;}
}

bool check(char a[])
{
    if(a[0]=='a')
    {
        if(a[1]==''){check(a+2);}
        if(a[1]=='a'){check (a+2);}
        if(a[1]+a[2]!="bb"){check(a+2);}
    }
    {return false;}
    if(a[0]+a[1]=="bb" && (a[2]!=''||a[2]!='a')){return false;}
}

int main()
{
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
/*Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if 
the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S
Output format :
'true' or 'false'
Sample Input 1 :
abb
Sample Output 1 :
true
Sample Input 2 :
abababa
Sample Output 2 :
false*/