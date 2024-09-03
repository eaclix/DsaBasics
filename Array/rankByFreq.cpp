#include<bits/stdc++.h>
using namespace std;

bool sortele(pair<int, int> a, pair<int, int> b)
{
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
};

int main(){

    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    vector <pair<int, int>> vec;
    for(auto it = mpp.begin(); it != mpp.end(); it++){
        vec.push_back({it->first, it->second});
    }

    sort(vec.begin(), vec.end(), sortele);
    for( int i=0; i<vec.size(); i++){
        while(vec[i].second>0){
            cout<<vec[i].first<<" ";
            vec[i].second--;
        }
    }

    cout<<endl;
    return 0;
}
