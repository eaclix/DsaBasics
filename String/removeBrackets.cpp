#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();
    string result;

    for( int i=0; i<n; i++){
        if(s[i]!='(' && s[i]!=')'){
        result += s[i];
        }
    }

    cout<<result;
    
    return 0;
}
