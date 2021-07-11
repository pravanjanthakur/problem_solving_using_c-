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
int DecimalToAnyBase(int aa, int bb){
    int ans=0;
    int power=1;
    while(aa!=0){
        int r=aa%bb;
        aa=aa/bb;
        ans=ans+(r*power);
        power=r*10;
    }
return ans;
}

int main(){
    int aaa, bbb, ccc;
    cout<<"Enter the number";
    cin>>aaa;
    cout<<"From Base";
    cin>>bbb;
    cout<<"To Base";
    cin>>ccc;
    int ans= AnyBaseToDecimal(aaa,bbb);
    cout<<DecimalToAnyBase(ans,ccc);
    return 0;
}