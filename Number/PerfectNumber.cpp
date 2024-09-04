#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int sum =0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum += i;
        }
    }
        if(n==sum){
            cout<<"It is pefect number";
        }
        else{
            cout<<"It is not perfect number";
        }

    return 0;
}
