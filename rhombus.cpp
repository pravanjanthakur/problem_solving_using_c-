#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length";
    cin>>n;
for(int i=0; i<n; i++){
for(int j=0; j<n*2; j++){
if (i+j>=(n-1) && i+j<=2*(n-1)){
    cout<<"*";
}
else{
    cout<<" ";
}
}cout<<endl;
}
    return 0;
}