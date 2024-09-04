#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int temp = n;
    int sum= 0;
    int k = to_string(n).length();
    
    while(temp>0){
        int ld = temp%10;
        sum += pow(ld, k);
        temp = temp/10;
    }
    return sum==n;
}

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(isArmstrong(n)){
        cout<<"It is Armstrong";
    }
    else cout<<"It is not Armstrong";
    
    return 0;
}
