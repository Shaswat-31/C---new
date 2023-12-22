#include<iostream>
using namespace std;

int main(){
    for(int k=1; k<=20; k=k*2){
        cout<<"*"<<endl;
    }
    cout<<endl;
    for(int j=20; j>=1; j=j/2){
        cout<<"*"<<endl;
    }
}