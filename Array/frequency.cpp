#include<bits/stdc++.h>
using namespace std;

int countfrequency(int arr[], int n){
    unordered_map <int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto x: mpp){
        cout<< x.first<< " " << x.second<<endl;
    }
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

    countfrequency(arr, n);
    return 0;
}