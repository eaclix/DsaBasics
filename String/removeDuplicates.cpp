#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    getline(cin,s);

    int n = s.length();
    string ans = "";

    vector<bool> map(26, false);
    for(int i=0; i<n; i++){
        if(map[s[i]- 'a'] == false){
            ans += s[i];
            map[s[i]- 'a'] = true;
        }
    }
    cout<<ans;

    return 0;
}
