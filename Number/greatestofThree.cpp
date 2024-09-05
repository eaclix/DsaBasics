#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    int c;
    cout << "Enter c: ";
    cin >> c;


    if(a>b && a>c){
        cout<< "a";
    }
    else if (b>a && b>c) cout<<"b";
    else cout<<"c";

    return 0;
}
