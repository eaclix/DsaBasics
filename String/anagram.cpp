#include<bits/stdc++.h>
using namespace std;
int main(){

    string str1;
    cout<<"Enter the String 1: ";
    getline(cin,str1);

    string str2;
    cout<<"Enter the String 2: ";
    getline(cin,str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1==str2){
        cout<<"Yes, Anagram";
    }
    else cout<<"NO, not Anagram";
    
    return 0;
}
