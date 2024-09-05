#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    
    int temp = n;
    int reverse =0;

    while(temp>0){
        int ld = temp%10;
        reverse = reverse*10 + ld;
        temp = temp/10;
    }
    cout <<reverse;

    return 0;
}
