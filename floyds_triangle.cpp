#include<iostream>
using namespace std;
int main(){
    int n;
    int a=1;
    cout<<"Enter the length";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<a<<" ";
            a++;

        }cout<<endl;
    }
}