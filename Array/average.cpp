#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int averageofarr = sum/n;
    cout<<"The average of array is: "<<averageofarr<<endl;

    return 0;
}
