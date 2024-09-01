#include<bits/stdc++.h>
using namespace std;

void insert_beginning(int* arr, int n, int value){
    for(int i=n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0]= value;
}

void insert_end(int* arr, int n, int value){
    arr[n]=value;
}

void insert_position(int* arr, int n, int value){

    int position;
    cout<<"Enter the position you want to insert: ";
    cin>>position;

    for(int i=n; i>=position; i--){
        arr[i]=arr[i-1];
    }
    arr[position-1] = value;
}

int main(){

    int n;
    cout<<"Enter Number of elements: ";
    cin>>n;

    int arr[n+1];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int choice;
    cout << "Choose an option:\n";
    cout << "1. Add element at the beginning\n";
    cout << "2. Add element at the end\n";
    cout << "3. Add element at a specific position\n";
    cin>>choice;

    int value;
    cout<<"Enter the value to be inserted : ";
    cin>>value;

    switch(choice){
        case 1: 
        insert_beginning(arr, n, value);
        break;

        case 2:
        insert_end(arr, n, value);
        break;

        case 3:
        insert_position(arr, n, value);
        break;

        default:
        cout<<"Make a valid choice !"<<endl;
    }

    cout<<"New Array after insertion : ";
    for(int i=0; i<=n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
