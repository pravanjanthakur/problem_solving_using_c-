#include<iostream>
using namespace std;

int frequen(int n,int r){
    int count=0;
    while(n!=0){
    int a=n%10;
    if(a==r){
        count++;
    }
    n=n/10;
    }
    return count;
}
int main(){
    int n; 
    int r;
    int c;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Check the frequency of";
    cin>>r;
    c=frequen(n,r);
    cout<<c;
    return 0;
}