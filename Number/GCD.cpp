#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n1;
    cout<<"Enter the number 1: ";
    cin>>n1;

    int n2;
    cout<<"Enter the number 2: ";
    cin>>n2;

    while(n2!=0){
        int temp = n2;
        n2 = n1%n2;
        n1 = temp;
    }

    cout<< n1;

    return 0;
}
