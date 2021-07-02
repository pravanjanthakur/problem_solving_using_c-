#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the length";
    cin>>n;
for (int i=0; i<n; i++){
for (int j=0; j+i<=n-1; j++){
cout<<" ";
}
    for(int k=i+1; k>1;k--){
        cout<<k;
    }
    for(int k=1; k<=i+1;k++){
        cout<<k;

}cout<<endl;
}
    return 0;
}