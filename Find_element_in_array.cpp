#include<iostream>
using namespace std;
int findelement(int*arr, int n, int d){
    for(int i=0; i<n; i++){
        if(arr[i]==d){
            return i;
        }
    }
    return -1;
}
int main(){
int n,d;
cin>>n;
int*arr= new int[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cin>>d;
cout<<findelement(arr,n,d);

    return 0;
}