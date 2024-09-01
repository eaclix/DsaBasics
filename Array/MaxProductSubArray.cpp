#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &arr, int n){
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
        pre *= arr[i];
        suff *= arr[n-i-1];
        ans = max(ans, max(pre, suff));
    }
    return ans;
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
    
    cout<<"The resultant array is: "<<maxProductSubArray(arr, n)<<" ";

    return 0;
}
