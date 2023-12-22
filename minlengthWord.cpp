#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"enter size"<<endl;
    int size;
    cin>>size;
    char input[size];
    cin.getline(input,size);

    int l=strlen(input);
    int *arr=new int[l];
    int count=0; int k=0;
    for(int i=0;i<l;i++){
        if(input[i]==' '){
        arr[k]=i-count;
        k++;
        count=i;
        }
    }
}