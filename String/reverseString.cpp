#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}
