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
            if(count == 1){
                cout<<ch<<" ";
            }
            count = 1;
            ch = s[i];
        }
    }

    if(count == 1){
        cout<<ch<<" ";
    }

    return 0;
}
