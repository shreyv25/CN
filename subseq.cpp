#include<bits/stdc++.h>
#include<math.h>

using namespace std;


int subs(string input,string o[])
{
    if(input.empty())
    {
        o[0]="";
        return 1;
    }
    string small=input.substr(1);
    int smallsize=subs(small,o);
    for(int i=0;i<smallsize;i++)
    {
        o[i+smallsize]=input[0]+o[i];
    }
    return 2*smallsize;
}
int main()
{
    string num;
    cin >> num;
    string* output=new string[1000];
    int count = subs(num, output);
    for(int i = 0;i<count+1 ; i++){
        cout << output[i] << endl;
    }
    return 0;
}