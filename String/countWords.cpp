#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    getline(cin,s);

    int n = s.length();
    int count = 1;
    for( int i=0; i<n; i++){
    if(s[i]==' '){
        count++;
        }
    }
    cout<<count;
    return 0;
}
