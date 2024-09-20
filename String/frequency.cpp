#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    sort(s.begin(),s.end());
    int n = s.length();
    char ch = s[0];
    int count = 1;

    for(int i=1; i<n; i++){
        if(s[i]==ch){
            count++;
        }
        else{
            cout<<ch<<count<<" ";
            count = 1;
            ch = s[i];
        }
    }
    cout<<ch<<count<<" ";

    return 0;
}
