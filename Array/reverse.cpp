#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr-n);
    reverse(arr, arr+n);
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    reversearray(arr, n, k);
    cout<<"The rotated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
