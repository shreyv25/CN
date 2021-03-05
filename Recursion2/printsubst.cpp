#include<bits/stdc++.h>
using namespace std;

void print_subs(string in,string o)
{
    if(in==""){
        cout<<o<<"\n";
        return;
        }
    print_subs(in.substr(1),o);
    o+=in[0];
    print_subs(in.substr(1),o);
}

int main()
{
    string f,o="";
    cin>>f;
    print_subs(f,o);
    return 0;
}