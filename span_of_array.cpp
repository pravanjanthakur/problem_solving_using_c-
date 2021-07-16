#include<iostream>
using namespace std;
int main(){
int*arr= new int[6];

for(int i=0; i<6; i++){
cin>>arr[i];
}
int max=arr[0];
int min=arr[0];
for(int i=0; i<6; i++){
if(arr[i]>max){
    max=arr[i];
}
if(arr[i]<min){
    min=arr[i];
}
}
int ans= max-min;
cout<<ans;
    return 0;
}