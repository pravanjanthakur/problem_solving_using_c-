#include<iostream>
using namespace std;

int AnyBaseToDecimal(int a, int b){
int ans=0;
int power=1;
while(a!=0){
int r=a%10;
a=a/10;
ans=ans+(r*power);
power=power*b;

}
    return ans;
}
int main(){
int a,b;
cout<<"Enter the number";
cin>>a;
cout<<"Base";
cin>>b;
cout<<AnyBaseToDecimal(a,b);
    return 0;
}
