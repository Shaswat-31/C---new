#include<iostream>
using namespace std;

int sum(int x, int y){
    return x+y;

}

int main(){
   cout<<"enter two no.";
   int n;
   cin>>n;
   int m;
   cin>>m;
   cout<<"sum : "<<sum(n,m);

}