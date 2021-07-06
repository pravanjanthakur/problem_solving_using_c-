#include<iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=1; i<=n; i++){
        a=a*i;
    }
    return a;
}
int main(){
int n,r,aa,bb,cc;
cout<<"Enter first input n and second r";
cin>>n>>r;
aa=fact(n);
bb=fact(r);
cc=fact(n-r);
cout<<(aa/(bb*cc));

return 0;
}