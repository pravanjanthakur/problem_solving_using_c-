#include<iostream>
using namespace std;
int main(){
    int n, a=1;
    cout<<"Enter the length";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; i+j<n; j++){
        cout<<a;
        a++;
        }cout<<endl;
        a=1;
    }

    return 0;
}