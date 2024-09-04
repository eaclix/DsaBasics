#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt =0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cnt += 1;
            
            if(n/i != i){
                cnt += 1;
            }
        }
    }
    
    if(cnt == 2){
        return true;
    }
    else return false;
}

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isPrime(n)){
        cout<<"It is Prime number";
    }
    else{
        cout<<"It is not Prime number";
    }
    return 0;
}
