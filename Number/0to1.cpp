#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n==0){
        return 1;
    }

    int temp = n;
    string result = "";
    while(temp>0){
        int ld = temp%10;
        if(ld==0){
            ld = 1;
        }
        result += to_string(ld);
        temp /= 10;
    }
    reverse(result.begin(), result.end());
    cout<<result;
    return 0;
}
