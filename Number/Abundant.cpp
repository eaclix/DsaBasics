#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum>n){
        cout<<"It is abundant";
    }
    else cout<<"It is not abundant";

    return 0;
}
