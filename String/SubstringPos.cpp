#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1;
    cout<<"Enter the string 1: ";
    getline(cin,s1);
    
    string s2;
    cout<<"Enter the string 2: ";
    getline(cin,s2);
    
    auto findIDX = s1.find(s2);
    cout<<findIDX;

    cout<<s1;
    return 0;
}
