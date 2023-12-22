#include<iostream>
using namespace std;

void printArray(int **input,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            for(int k=0;k<col;k++){
                cout<<input[i][k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    cout<<"enter number of rows"<<endl;
    int row;
    cin>>row;
    cout<<"enter number of columns in each row"<<endl;
    int col;
    cin>>col;
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    cout<<"enter the values"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    printArray(arr,row,col);
}