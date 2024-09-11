#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cout<<"Enter the String: ";
    cin>>s;

    int n = s.length();
    int left = 0;
    int right  = n-1;

    while(left<right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[left]) != tolower(s[right])){
            cout<<"It is not a palindrome";
            break;
        }
        else{
            left++;
            right--;
        }
    }
    cout<<"It is a palindrome";

    return 0;
}
