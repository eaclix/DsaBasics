#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k){
    reverse(arr, 0 , n-k-1);
    reverse(arr, n-k, n-1 );
    reverse(arr, 0, n-1);
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

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    rotateRight(arr, n, k);
    for( int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}
