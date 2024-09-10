#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"ENter base: ";
    cin>>n;

    int x;
    cout<<"ENter pow: ";
    cin>>x;


    int ans = 1;

    for(int i=0; i<x; i++){
        ans = ans*n;
    }
    cout<<ans;

    return 0;
}
