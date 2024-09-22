#include<bits/stdc++.h>
using namespace std;
int main(){

    string s,maxWord;
    cout<<"Enter the string: ";
    getline(cin,s);
    int n = s.length();
    int i=0,j=0;
    int min_len = n, max_len = 0, max_start = 0;

    while(j<=n){
        if(j<n && s[j]!=' '){
            j++;
        }
        else{
            int current_len = j-i;
            if(current_len>max_len){
                max_len = current_len;
                max_start = i;
            }
            j++;
            i=j;
        }
    }
    maxWord = s.substr(max_start, max_len);
    cout<<maxWord;
    return 0;
}
