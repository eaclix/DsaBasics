#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        set<int> s;
        for(int j = 0; j < n; j++){
            if(arr[j] < arr[i]){
                s.insert(arr[j]);
            }
        }
        cout << s.size() + 1 << " ";
    }
    return 0;
}
