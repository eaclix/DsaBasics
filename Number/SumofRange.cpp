#include<bits/stdc++.h>
using namespace std;
int main(){

    int n1;
    cout<<"Enter the start: ";
    cin>>n1;

    int n2;
    cout<<"Enter the end: ";
    cin>>n2;

    int sum=0;

    for(int i = n1; i<=n2; i++){
        sum +=i;
    }
    cout<<sum;
    return 0;
}
