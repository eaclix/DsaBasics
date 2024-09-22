#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();
   
    for(int i=0; i<n; i++){
        int ascii = (int)(s[i]);
        if(ascii==90){
            s[i]=char(65);
        }
        else if(ascii==122){
            s[i]=char(97);
        }
        else if((ascii>=65 && ascii<90) || (ascii>=97 && ascii<122)){
            s[i] = char(ascii+1);
        }
    }

    cout<<s;
    return 0;
}
