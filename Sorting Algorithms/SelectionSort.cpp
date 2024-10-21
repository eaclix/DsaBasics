#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main(){

    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr);

    cout<<"Sorted Array after Selection Sort: ";
    for(int i=0; i<n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
