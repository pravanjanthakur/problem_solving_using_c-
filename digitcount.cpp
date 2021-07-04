#include<iostream>
using namespace std;
#include<math.h>
int main(){
int a,c,b=0,sum=0,t=0;
cout<<"Enter a number";
cin>>c;
a=c;
while(a!=0){
    a=a/10;
    b++;
}
a=c;
while(c!=0){
    t=c%10;
    t=pow(t,b);
    sum=sum+t;   
    c=c/10;
}
if (a==sum){
    cout<<"Armstrong";
}
else{
    cout<<"Not armstrong";
}

return 0;   
}