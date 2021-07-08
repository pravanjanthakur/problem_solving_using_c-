#include<iostream>
using namespace std;
int DeciamlToAnyBase(int a, int b){
int ans=0;
int power=1;
while(a!=0){
    int r = a%b;
    a=a/b;
    ans= ans+(r*power);
    power=power*10;
}
return ans;
}
int main(){
    int a,b;
    cout<<"Decimal Number";
    cin>>a;
    cout<<"Base";
    cin>>b;
    cout<<DeciamlToAnyBase(a,b);
    return 0;
}