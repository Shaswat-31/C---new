#include<iostream>
using namespace std;
int main(){
    int arr[]={40,24,3,4,534,23,455,2,4,22,455,22,5556,74,1,0,-45,-3,13};
    int l=sizeof(arr);
    int j;
    int key;
    for(int i=1;i<l;i++){
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<endl;
    }
}