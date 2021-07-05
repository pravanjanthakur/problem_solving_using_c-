#include<iostream>
using namespace std;

void fib(int n){
    int a=0,b=1;
    int next_term;
    for(int i=0; i<=n; i++){
        cout<<a<<endl;
        next_term=a+b;
        a=b;
        b=next_term;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the lenght";
    cin>>n;
    fib(n);
    
    return 0;
}