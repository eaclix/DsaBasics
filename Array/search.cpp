#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }

    int val;
    cout<<"Enter the element to be searched: ";
    cin>>val;

    for(int i=0; i<n; i++){
        if(arr[i]==val){
            cout<< i;
        }
    }

    return 0;
}
