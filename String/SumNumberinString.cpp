#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int n = s.length();
    int sum = 0;
    string temp;

    for( int i=0; i<n; i++){
        if(s[i]>='1' && s[i]<='9'){
        temp += s[i];
        }
        else{
            sum += atoi(temp.c_str());
            temp = "";
        }
    }

    cout<< sum + atoi(temp.c_str());
    
    return 0;
}
