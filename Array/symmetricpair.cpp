#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of pairs: ";
    cin>>n;

    int arr[n][2];
    cout<<"Enter the pairs: "<<endl;
    for(int i=0; i<n; i++){
        cin>> arr[i][0]>> arr[i][1];
    }

    unordered_map<int, int> mp;
    cout<<"The symmetric pairs are: "<<endl;

    for(int i=0; i<n; i++){
        int first = arr[i][0];
        int second = arr[i][1];

        if(mp.find(second) != mp.end() && mp[second] == first){
            cout<<"("<<first<<", "<<second<<")"<<" ";
        }else{
            mp[first] = second;
        }
    }
    cout<<endl;

    return 0;
}
