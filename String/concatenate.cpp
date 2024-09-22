#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1;
    cout<<"Enter the string 1: ";
    getline(cin,s1);
    
    string s2;
    cout<<"Enter the string 2: ";
    getline(cin,s2);
    
    // string res = "";

    // res = s1 + s2;
    // cout<<res;


    s1.append(s2);
    cout<<s1;
    return 0;
}
