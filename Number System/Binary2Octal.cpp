#include<bits/stdc++.h>
using namespace std;
int main(){

    string n;
    cout<<"Enter the binary number: ";
    cin>>n;

    int ans = stoi(n, 0, 2);
    cout<<oct<<ans;
   
    return 0;
}
