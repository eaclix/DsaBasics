#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
} 

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = largest_element(arr, n);
    cout<<"The largest number in the array is: "<<max<<endl;

    return 0;

}