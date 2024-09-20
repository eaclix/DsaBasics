#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();

    for(int i=0; i<n; i++){
        if(i==0 || i==(n-1)){
            s[i] = toupper(s[i]);
        }
        if(s[i]==' '){
            s[i-1] = toupper(s[i-1]);
            s[i+1] = toupper(s[i+1]);
        }
    }

    cout<<s;
    return 0;
}
