#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
}

int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int sum = 0;
    int temp = n;
    while(temp>0){
        int ld = temp%10;
        sum += factorial(ld);
        temp = temp/10;
    }

    if(sum == n){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
