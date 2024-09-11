#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    getline(cin,s);

    int vowels = 0, consonants = 0, spaces = 0;
    int n = s.length();

    for(int i = 0; i<n; i++){
        s[i] = tolower(s[i]);
    }

    for(int i=0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowels++;
        }
        else if(s[i]>='a' && s[i]<= 'z'){
            consonants++;
        }
        else if(s[i]==' '){
            spaces++;
        }
    }

    cout<<"Vowels: "<<vowels<<" Consonants: "<<consonants<<" WhiteSpaces: "<<spaces;

    return 0;
}
