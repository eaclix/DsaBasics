#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the digit: ";
    cin>>n;

    int temp=n;
    int sum = 0;
    while(temp>0){
        int ld = temp%10;
        sum += ld;
        temp /= 10;
    }
    cout<<sum;
    return 0;
}
