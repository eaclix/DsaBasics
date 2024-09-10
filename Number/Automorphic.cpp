#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sq = n*n;

    while(n>0){
        if(n%10 != sq%10){
            cout<<"False";
            return 0;
        }
        n /= 10;
        sq /= 10;
    }
    cout<<"True";
    return 0;
}
