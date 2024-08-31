#include<bits/stdc++.h>
using namespace std;

int smallest_element (int arr[], int n){
    int min = arr[0];
    for(int i =1; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int n;
    cout<<"Enter the Number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int min = smallest_element(arr, n);
    cout<<"The smallest element in the array is: "<<min<<endl;

    return 0;
}