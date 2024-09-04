#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt=0;
    for(int i=1; i<n; i++){
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
    int min;
    cout<<"Enter the min range: ";
    cin>>min;
    
    int max;
    cout<<"Enter the max range: ";
    cin>>max;
    
    for(int i = min; i<=max; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
