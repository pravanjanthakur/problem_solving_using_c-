#include<iostream>
using namespace std;
void fact(int n){
    int i=1,a=1;
    while(i<=n){
        a=a*i;
        i++;
    }
    cout<<a;
    return;
}
int main(){
    int n;
    cout<<"Enter a num";
    cin>>n;
    fact(n);
    return 0;
}