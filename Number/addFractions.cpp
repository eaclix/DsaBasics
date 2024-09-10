#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

void simplify(int& n3, int& d3){
    int _gcd = gcd(n3, d3);
    n3 /= _gcd;
    d3 /= _gcd;
}

int main(){

    int n1;
    cout<<"Enter the value of n1: ";
    cin>>n1;

    int n2;
    cout<<"Enter the value of n2: ";
    cin>>n2;

    int d1;
    cout<<"Enter the value of d1: ";
    cin>>d1;

    int d2;
    cout<<"Enter the value of d2: ";
    cin>>d2;

    int n3, d3;

    d3 = d1*d2;
    n3 = (n1*d2) + (n2*d1);

    simplify(n3, d3);

    cout<<n3<<"/"<<d3;

    return 0;
}
