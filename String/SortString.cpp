#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    getline(cin,s);

    sort(s.begin(), s.end());
    cout<<s;

    return 0;
}
