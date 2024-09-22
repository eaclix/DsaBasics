#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    getline(cin,s);
    int n = s.length();

    for(int i=0; i<n; i++){
        int ascii = (int)(s[i]);

        if(ascii>=65 && ascii <=90){
            s[i] = towlower(s[i]);
        }
        else if(ascii>=97 && ascii<=122){
            s[i] = towupper(s[i]);
        }
    }

    cout<<s;
    return 0;
}
