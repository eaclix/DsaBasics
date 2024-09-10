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
    cout<<"Enter the people: ";
    cin>>n;

    int r;
    cout<<"Enter the seats: ";
    cin>>r;

    int ans = factorial(n)/factorial(n-r);
    cout<<ans;

    return 0;
}
