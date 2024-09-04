#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int revnum = 0;
    int dup = n;
    while(n>0){
        int ld = n%10;
        revnum = (revnum*10) +ld;
        n = n/10;
    }
    if(dup==revnum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(palindrome(n)){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
    
    
    return 0;
}
