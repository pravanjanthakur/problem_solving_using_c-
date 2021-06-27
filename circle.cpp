#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the radius";
    cin>>r;
    float dist;
    for(int i =0; i<=2*r; i++){
        for(int j=0; j<=2*r; j++){
            dist = ((i-r) * (i-r) +(j-r) * (j- r))^1/2;
            if (dist>r-0.5 && dist<r+0.5){
                cout << "*";
            }
            else{
                cout << " "; 
            }
        }
        cout<<endl;
    }
}