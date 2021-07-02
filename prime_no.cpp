#include<iostream>
using namespace std;
int main(){   
    int a,i;
    cout<<"enter a number";
    cin>>a;
    for(i=2; i<a; i++){
    if (a%i==0){
    cout<<"This is not a Prime";
    break;
}}
 if(i==a){
cout<<"This is Prime";
}
 
 return 0;
 }