#include<iostream>
using namespace std;
int AnyBaseToDecimal(int n, int b){
    int ans=0;
    int power=1;
while(n!=0){
    int r= n%10;
    n=n/10;
    ans=ans+(r*power);
    power=power*b;
}                   
return ans;   
  
}
int DecimalToAnyBase(int num, int b){
int ans=0;
int power=1;
    while(num!=0){
        int r= num%b;
        num=num/b;
        ans=ans+(r*power);
        power=power*10;

    }
return ans;
}
int main(){

    int n1,n2,b;
    cout<<"Enter the 1st number";
    cin>>n1;
    cout<<"Enter the 2nd number";
    cin>>n2;
    cout<<"Enter the Base";
    cin>>b;
 int ans1=AnyBaseToDecimal(n1,b);
 int ans2=AnyBaseToDecimal(n2,b);
 int answer=ans1+ans2;
cout<<DecimalToAnyBase(answer,b);
return 0;    
}
