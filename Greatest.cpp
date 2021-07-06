#include<iostream>
using namespace std;


int main (){
int a,b,c;
cout<< "Enter first number\n";
cin>>a;
cout<< "Enter second number\n";
cin>>b;
cout<<"Enter a third number\n";
cin>>c;
if (a>=b && a>=c){
    cout<<a;
}
else if(b>=a && b>=c){
    cout<<b;
}
else if(c>=a && c>=b){
    cout<<c;
}
    return 0;
}
