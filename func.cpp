#include<iostream>
using namespace std;

int sum(int kalu, int motu){
    cout<<"Sum is "<<kalu+motu<<endl;
return 0;
}

int main(){
int b,d;
while(true){
    cin>>b>>d;
    sum(b,d);
}
return 0;
}