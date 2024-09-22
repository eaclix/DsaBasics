#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1;
    cout<<"Enter the string 1: ";
    getline(cin,s1);
    int n = s1.length();

    string s2;
    cout<<"Enter the string 2: ";
    getline(cin,s2);
    int m = s2.length();

    string ans = "";

    unordered_map<char, int> map;
    for(int i=0; i<m; i++){
        map[s2[i]] = 1;
    }

    for(int i=0; i<n; i++){
        if(!map[s1[i]]){
            ans.push_back(s1[i]);
        }
    }
    cout<<ans;
    return 0;
}
