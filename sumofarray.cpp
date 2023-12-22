#include<iostream>
using namespace std;

int sum(int input[],int n){
    if(n-1==0){
        return input[0];
    }
    return input[n-1]+sum(input,n-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sum(arr,5);
}