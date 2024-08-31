#include<bits/stdc++.h>
using namespace std;

void remduplicate(int arr[], int &n){

    sort(arr, arr+n);
    int j=1;
    for(int i=1; i<n; i++){
        
        if(arr[i] != arr[j-1]){
            arr[j] = arr[i];
            j++;
        }
    }
    n = j;
}

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    remduplicate(arr, n);
    cout<<"New array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
