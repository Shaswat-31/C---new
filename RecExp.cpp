#include<iostream>
using namespace std;
int fun(int n){
    if(n<=1)
    return 5;

    if(n%2==0){
        return (fun(n-2)-1);
    }
    else
    return (fun(n-1)-1);
}
int main(){
    cout<<fun(4);
}