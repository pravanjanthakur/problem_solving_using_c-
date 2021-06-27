#include<iostream>
using namespace std;
int main(){
    int i=1,a=3000;
    while (i<=30){
        cout<<"Enter a date"<<endl;
        cin>>i;
        if(i>30 || a<=0){
            cout<<"Insufficient balance or incorrect date";
            break;
        }
        if (i%2==0 && a>=300){
            cout<<"You can go"<<endl;
            a=a-300;
        }
        else{
            cout<<"You can't go"<<endl;
        }
    }
     return 0;
}