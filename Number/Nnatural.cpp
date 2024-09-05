#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter N: ";
    cin>>n;

    int sum =0;
    // another method by applying formula:
    // sum = (n*(n+1))/2;

    for(int i = n; i>=1; i--){
        sum += i;
    }
    cout<<sum;

    return 0;
}
