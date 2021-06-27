#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the length";
    cin>>n;
    for(int i=0; i<4; i++){
        for(int j=0; j<n; j++){
    if (j<=i || (n-1)-i<=j){
    cout<<"*";
    }
    else{
        cout<<" ";
    }
        }
        cout<<endl;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<n; j++){
    if ((n-1)-i>=j){
    cout<<"*";
    }
    else{
        cout<<" ";
    }
        }
        cout<<endl;
    }
    return 0;
}