#include<bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n){
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum += arr[i];
    }

    int leftsum = 0, rightsum = totalsum;
    for(int i=0; i<n; i++){
        rightsum -= arr[i];
        if(leftsum == rightsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
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


    int index = equilibrium(arr, n);
    if (index != -1) {
        cout << "The equilibrium index is: " << index << endl;
    } else {
        cout << "No equilibrium index found." << endl;
    }

    return 0;
}
