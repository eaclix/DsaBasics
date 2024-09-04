#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0;
    int temp = n;
    
    while(temp>0){
        reverse = reverse*10 + temp%10;
        temp /= 10;
    }
    if(n==reverse) return true;
    else return false;
}
    
int main(){
    
    int min;
    cout<<"Enter the min of range: ";
    cin>>min;
    
    int max;
    cout<<"Enter the max of range: ";
    cin>>max;
    
    for(int i=min; i<=max; i++){
        if(isPalindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
