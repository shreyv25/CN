#include<bits/stdc++.h>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void replacePi(char a[]) {
	if(a[0]=='\0')return;
    int size;
    for(size=0;a[size]!='\0';size++);
    if(a[0]=='p'&&a[1]=='i'){
        for(int i=size-1;i>1;i--){
            a[i+2]=a[i];
        }
        a[size+2]='\0';
        a[0]='3';
        a[1]='.';
        a[2]='1';
        a[3]='4';
    replacePi(a+4);
    }
    replacePi(a+1);
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