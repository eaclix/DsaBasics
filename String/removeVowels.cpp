#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();

    for( int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            s = s.substr(0,i) + s.substr(i+1);
        }
    }

    cout<<s;
    
    return 0;
}
