#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp = n;
    int sum = 0;
    while(temp>0){
        int ld = temp%10;
        sum += ld;
        temp /= 10;
    }

    if(n%sum==0 && sum!=0){
        cout<<"Yes it is a harshad number";
    }
    else cout<<"No";
    return 0;
}
