#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    double median;
    if(n%2==0){
        median = (arr[n/2]+arr[(n/2)-1])/2.0;
    }
    else{
        median = arr[n/2];
    }

    cout<<"Median of array is: "<<median<<endl;
    return 0;
}
