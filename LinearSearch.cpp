#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n, int key){
    for(int i=0; i<n; i++){
        if (key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key; 
    cout<<"Enter the key,want to search from the array";
    cin>>key;
    cout<<LinearSearch(arr,n,key);
return 0;
}