#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n){
    cout<<"Reversed array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reversearray(int arr[], int n){
    int p1 = 0;
    int p2 = n-1;

    while(p1<p2){
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
    }
    print_array(arr,n);
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

    reversearray(arr,n);
    return 0;

}