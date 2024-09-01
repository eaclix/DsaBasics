#include<bits/stdc++.h>
using namespace std;

void repeating_elements(vector<int>& arr){
    unordered_map<int, int> elementcount;
    for(auto i : arr) ++elementcount[i];

    cout << "The repeating elements are: ";
    for(auto i : elementcount){
        if(i.second > 1) cout << i.first << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of the vector array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    repeating_elements(arr);

    return 0;
}
