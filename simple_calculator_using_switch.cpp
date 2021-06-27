#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout<<"Entter First Number"<<endl;
    cin>>a;
    cout<<"Entter Second Number"<<endl;
    cin>>b;
    cout<<"Enter the operation"<<endl;
    cin>>operation;
    switch(operation){
case '+':
cout<<a+b;
break;
case '-':
cout<<a-b;
break;
case '*':
cout<<a*b;
break;
case '/':
cout<<a/b;
break;
default:
cout<<"No other operation";

    }
    return 0;
}