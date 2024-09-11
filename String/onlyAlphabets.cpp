#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();
    string result;

    for( int i=0; i<n; i++){
        if(((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))){
            result += s[i];
        }
    }

    cout<<result;
    
    return 0;
}
