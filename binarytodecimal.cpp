#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout<<"enter a binary num : ";
    int n;
    cin>>n;
    int dec=0;
    int count=0;
    
    while(n!=0){
        int r=n%10;
        dec=dec+(r*pow(2,count));
        n=n/10;
        count++;
    }
    cout<<"decimal number is : "<<dec<<endl; 

    int oct=0;
    int cvalue=1;
    while(dec!=0){
        int r=dec%8;
        oct+=r*cvalue;
        cvalue*=10;
        dec/=8;
    }
    cout<<oct;
}